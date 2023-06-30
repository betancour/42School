#include "../includes/ft_lib.h"

void ft_display_custom_error(int eno, char *argv)
{
	ft_putstr(g_progname);
	ft_putstr(": ");
	ft_putstr(argv);
	ft_putstr(": ");
	ft_putstr((char *)ft_get_strerr(eno));
	ft_putchar('\n');
}
