NAME = libft.a
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o) 
TEST = default
FLAGS = -Wall -Wextra -Werror 

$(NAME): $(OBJ)
	ar rcs $(NAME) $^	

all: $(NAME)

%.o: %.c
	cc $(FLAGS) -c $<

asd:
	@ echo $(TEST)

test: $(NAME) test_$(TEST).c clean 
	@ cc $(FLAGS) test_$(TEST).c $(NAME) -lbsd
	@ ./a.out
	@ rm a.out

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.SILENT:
