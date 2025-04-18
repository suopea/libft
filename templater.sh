
echo "$1\tft_$2($3)\n{}" > ft_$2.c

cp $4 test_$2.c
sed -i -e "s/FUNCTION/$2/g" test_$2.c
sed -i -e "s/input/$3/g" test_$2.c
sed -i -e "0,/;/ s//;\n$1\tft_$2($3);/" libft.h