
echo "$1\tft_$2($3)\n{}" > ft_$2.c

cp test_$4 test_$2.c
sed -i -e "s/$4/$2/g" test_$2.c
sed -i -e "s/void\ttest(*)/void\ttest($3)" test_$2.c
sed -i -e "s/FUNCTION/$2/g" test_$2.c
sed -i -e "s/input/$3/g" test_$2.c
sed -i -e "0,/;/ s//;\n$1\tft_$2($3);/" libft.h