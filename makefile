NAME = libft.a
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o) 
TEST = default
TEST_FILE = ./tests/test_$(TEST).c
FLAGS = -Wall -Wextra -Werror 

$(NAME): $(OBJ)
	ar rcs $(NAME) $^	

all: $(NAME)

%.o: %.c
	cc $(FLAGS) -c $<

test: $(NAME) $(TEST_FILE) clean 
	@ cc $(FLAGS) $(TEST_FILE) $(NAME) -lbsd
	@ cat $(TEST_FILE) | pygmentize -l c -O style=monokai | sed 's/\t/    /g'
	@ valgrind --show-leak-kinds=all --track-fds=yes ./a.out
	@ echo "\n\n"
	@ ./a.out
	@ echo "\n\ntesting $(TEST)\n\nnorminette:\n"
	@ norminette ft_$(TEST).c 
	@ rm a.out

debug: $(NAME) $(TEST_FILE) clean 
	@ cc $(FLAGS) $(TEST_FILE) $(NAME) -g -lbsd
	@ gdb -tui ./a.out
	@ rm a.out

bclean:
	@ rm -f a.out libft.h.gch

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SILENT:
