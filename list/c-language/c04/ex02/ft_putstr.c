#include <unistd.h>

void    ft_putstr(char *str)
{
    if (str)
    {
        while (*str)
        {
            write(1, str, 1);
            str++;
        }
    }
}