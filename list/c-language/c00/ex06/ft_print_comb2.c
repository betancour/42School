#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    int     i;
    int     j;
    i = -1;
    while(++i <= 98)
    {
        j = 0;
        while(++j <= 99)
        {
            ft_putchar((char)(i/10) + '0');
            ft_putchar((char)(i%10) + '0');
            ft_putchar(' ');
            ft_putchar((char)(j/10) + '0');
            ft_putchar((char)(j%10) + '0');

            if( (j != 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}
