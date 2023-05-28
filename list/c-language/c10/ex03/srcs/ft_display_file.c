#include "../includes/ft_lib.h"

void ft_display_file(int i, int fd, int argc, char **argv)
{
    char buffer;
    int rnum;
    int readed;
    int offset;

    if (argv[1][0] == '-' && (argv[1][1] == 'C' || argv[1][1] == 'c'))
    {
        ft_print_name(i, argc, argv[i]);
        offset = (ft_size_file(argv[i]) - ft_atoi(argv[2]));
        readed = 0;
        while (readed < offset)
        {
            rnum = read(fd, &buffer, 1);
            if (rnum == -1)
            {
                ft_display_custom_error(errno, argv[i]);
                break;
            }
            readed += rnum;
        }
        if (readed == offset)
        {
            while ((rnum = read(fd, &buffer, 1)))
            {
                if (rnum == -1)
                {
                    ft_display_custom_error(errno, argv[i]);
                    break;
                }
                ft_putchar(buffer);
            }
        }
    }
}
