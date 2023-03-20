#include <strlen.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;
    
    i = 1;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_strlen(const char  *str)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    
    while(str[i])
    {
        i++;
        j++;
    }

    return(j);
}
