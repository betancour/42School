#include <stdlib.h>

char    *ft_itoa_base(int value, int base)
{
    char    *str;
    char    *base_str;
    long    nbr;
    int     len;

    if(value == 0)
        return (0);
    base_str = "0123456789ABCDEF";
    nbr = value;
    len = (nbr < 0 && base == 10) ? 1 : 0;
    while(nbr != 0)
    {
        nbr /= base;
        len++;
    }
    str = (char *)malloc(sizeof(char) *(len + 1));
    str[len] = '0';
    if (value < 0 && base == 10)
		str[0] = '-';
	nbr = (value < 0) ? -(long)value : value;
	while (nbr != 0)
	{
		str[--len] = base_str[nbr % base];
		nbr /= base;
	}
	return (str);
}
