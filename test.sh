cc -Wall -Wextra -Werror libft.h $1.c t_$1.c 
./a.out
echo "\n\n"
norminette $1.c
rm a.out
rm libft.h.gch