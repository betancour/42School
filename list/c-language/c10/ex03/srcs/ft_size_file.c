#include "../includes/ft_lib.h"

int     ft_size_file(char *argv)
{
    int     fd;
    char    buffer;
    int     size;
    int     r;

    size = 0;

    if((fd = open(argv, O_RDONLY)) == - 1)
    {
        ft_display_custom_error(errnum, argv);
        return (0);
    }

    while ((r = read(fd, &buffer, 1)))
    {
        if(r == -1)
        {
            ft_display_custom_error(errnum, argv);
            close(fd);
            return (0);
        }
        size++;
    }
    if(close(fd) == 1)
    {
        ft_display_custom_error(errnum, argv);
        return (0);
    }
    return size;
}
