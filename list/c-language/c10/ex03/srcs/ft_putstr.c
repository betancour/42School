#include "../includes/ft_lib.h"

void    ft_putstr(const char *str)
{
    int     i;

    i = 0;
    while (*(str + i))
    {
        i++;
        write(1, str, i);
    }

}
