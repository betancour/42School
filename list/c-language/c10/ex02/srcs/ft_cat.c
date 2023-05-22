#include "../includes/ft_lib.h"

void    ft_cat(int argc, char **argv)
{
    int     i;

    if (argc > 1)
    {
        g_progname = basename(argv[0]);
        i = 0;
        while (++i < argc)
        {
            if (ft_strcmp(argv[i], "-") == 0)
                ft_stdin();
            else
                ft_display_file(argv[i]);
        }
    }
    else if (argc == 1)
        ft_stdin();
}
