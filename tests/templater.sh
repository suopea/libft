
echo "$1\tft_$2($3)\n{}" > ft_$2.c

cp test_$4.c ./tests/test_$2.c
sed -i -e "s/$4/$2/g" ./tests/test_$2.c
sed -i -e "s/void\ttest(.*)/void\ttest($3)/" ./tests/test_$2.c

sed -i -e "0,/;/ s//;\n$1\tft_$2($3);/" libft.h