#include "../includes/ft_lib.h"

const char   *g_progname;

void ft_display_custom_error(int errnum, char *argv)
{
    ft_putstr(g_progname);
    ft_putstr(": ");
    ft_putstr(argv);
    ft_putstr(": ");
    ft_putstr(ft_get_strerr(errnum));
    ft_putchar('\n');
}
