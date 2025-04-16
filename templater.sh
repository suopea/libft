
echo \\n\\n$2\\n\{\\n\\n\} > $1.c


cp test_template test_$1.c
echo \\n$2\; >> test_$1.c

echo $2\; >> libft.h