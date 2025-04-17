
echo "\n$1\tft_$2($3)\n{}" > ft_$2.c


cp test_template test_$2.c
sed -i -e "s/FUNCTION/ft_$2/g" test_$2.c
sed -i -e "s/input/$3/g" test_$2.c
sed -i -e "s/correct/$1 correct/g" test_$2.c

sed -i -e "0,/;/ s//;\n\t$1\tft_$2($3);/" libft.h

# echo $2\; >> libft.h