NAME = ex_libft
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o) 


$(NAME): $(OBJ)
	cc -Wall -Wextra -Werror $(OBJ) -o $(NAME)
	@ rm -f *.o
	@ rm -f *.gch
	@ ./a.out
	@ echo "\n\nFIX MAKEFILE BEFORE SUBMISSION"

all: $(NAME)

%.o: %.c
	$(COMPILER) $(CFLAGS) -c $<

.PHONY: all