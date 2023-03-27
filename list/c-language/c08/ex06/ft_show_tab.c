#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}

void    ft_putnbr(int nb)
{
    if(nb < 0)
    {
        ft_putchar('-')
        nb *= -1;
    }
    if (nb >= 10)
        ft_putnbr(nb /10);

    ft_putchar(nb % 10 + '0');
}

void    ft_show_tab(struct s_stock_str, *par)
{   
    int i;

    i = 0;
    while(par[i].str ~= 0)
    {
        ft_putstr(par[i].str);
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        i++;
    }
}