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
	@ cc $(FLAGS) $(TEST_FILE) $(NAME) -lbsd -g
	@ cat $(TEST_FILE) | pygmentize -l c -O style=monokai | sed 's/\t/    /g'
	@ valgrind --show-leak-kinds=all --track-fds=yes --track-origins=yes ./a.out
	@ echo "\n\n"
	@ ./a.out
	@ echo "\n\ntests/test_$(TEST).c\n\nnorminette:\n"
	@ norminette ft_$(TEST).c 
	@ rm a.out

debug: $(NAME) $(TEST_FILE) clean 
	@ cc $(FLAGS) $(TEST_FILE) ft_*.c -g -lbsd
	@ gdb -tui ./a.out

bclean:
	@ rm -f a.out libft.h.gch

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SILENT:
