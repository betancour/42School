#include "../includes/ft_lib.h"

void    ft_print_name(int i, int argc, char *name)
{
    if(argc > 4)
    {
        if (i >= 4)
            ft_putstr("\n==> ");
        else
            ft_putstr("==> ");
        ft_putstr(name);
        ft_putstr(" <==\n");
    }
}
