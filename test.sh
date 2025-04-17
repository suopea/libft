cc -Wall -Wextra -Werror libft.h ft_$1.c test_$1.c 
./a.out
echo "\n\n"
norminette ft_$1.c
rm a.out
rm libft.h.gch