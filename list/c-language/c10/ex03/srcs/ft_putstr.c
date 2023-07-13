#include "../includes/ft_lib.h"

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (*(str + 1))
        i++;
    write(1, str, i);
}
