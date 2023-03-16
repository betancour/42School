#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c,1);
}


int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int base_len;

    base_len = ft_strlen(base);
    if (base_len < 2)
        return ;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= base_len)
        ft_putnbr_base(nbr / base_len, base);
    ft_putchar(base[nbr % base_len]);
}

