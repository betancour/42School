#include "../includes/ft_lib.h"

void    ft_tail(int argc, char **argv)
{
    int     fd;
    int     i;

    if (argc > 1)
    {
        g_progname = basename(*argv);
        i = 3;
        while (i < argc)
        {
            if ((fd = open(argv[i], O_RDONLY)) == -1)
                ft_display_custom_error(errnum, argv[i]);
            else
            {
                ft_display_file(i, fd, argc, argv);
                if (close(fd) == -1)
                    ft_display_custom_error(errnum, argv[i]);
            }
            i++;
        }
    }
    else if (argc == 1)
        ft_stdin();
}
