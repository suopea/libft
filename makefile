NAME = ex_libft
COMPILER = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CFLAGS) $(OBJ) -o $(NAME)
	@ rm -f *.o
	@ rm -f *.gch
	@ ./a.out
	@ echo "\n\nFIX MAKEFILE BEFORE SUBMISSION"

%.o: %.c
	$(COMPILER) $(CFLAGS) -c $<

.PHONY: all