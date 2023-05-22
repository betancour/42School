#include <fcntl.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_atoi(char *str)
{
    int i;
    int number;

    i = 0;
    number = 0;
    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if ((str[i] == 45) || (str[i] == 43))
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        number *= 10;
        number += ((int)str[i] - 48);
        i++;
    }
    return (number);
}

int     ft_strlen(char *str)
{
    int     len;

    len = 0;
    while (str[len])
        len++;
    return len;
}

void    ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void    print_names(int i, int argc, char **argv)
{
    int     j;

    j = 0;
    if (argc > 4)
    {
        if (i > 3)
            ft_putchar('\n');
        ft_putchar('=');
        ft_putchar('=');
        ft_putchar('>');
        ft_putchar(' ');
        while (argv[i][j])
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar(' ');
        ft_putchar('<');
        ft_putchar('=');
        ft_putchar('=');
        ft_putchar('\n');
    }
}

int     size_files(int i, char **argv)
{
    int     fd2;
    char    buffer;
    int     size;

    size = 0;
    fd2 = open(argv[i], O_RDONLY);
    while (read(fd2, &buffer, 1))
        size++;
    close(fd2);
    return (size);
}

void    disp_files(int i, int fd, int argc, char **argv)
{
    char    buffer;
    int     offset;
    int     readed;
    int     size_file;

    size_file = size_files(i, argv);
    readed = 0;
    offset = ft_atoi(argv[2]);
    print_names(i, argc, argv);
    if (argv[2][0] == '+')
    {
        while (readed != offset - 1)
            readed += read(fd, &buffer, 1);
        while (read(fd, &buffer, 1))
            ft_putchar(buffer);
    }
    else
    {
        while (readed < (size_file - offset))
            readed += read(fd, &buffer, 1);
        while (read(fd, &buffer, 1))
            ft_putchar(buffer);
    }
}

int     main(int argc, char **argv)
{
    int     fd;
    int     i;
    int     j;

    i = 3;
    if (argc < 4)
        return (0);
    while (i < argc)
    {
        j = -1;
        fd = open(argv[i], O_RDONLY);
        if (fd >= 0)
            disp_files(i, fd, argc, argv);
        else
        {
            ft_strcpy("ft_tail: ", "ft_tail: ");
            while (argv[i][++j])
                ft_putchar(argv[i][j]);
            ft_strcpy(": No such file or directory\n", ": No such file or directory\n");
        }
        close(fd);
        i++;
    }
    return (0);
}
