#include "../includes/ft_lib.h"

void ft_display_file(int argc, char **argv)
{
	int fd;
	char buffer;
	int r;

	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		else
			ft_putstr("File name missing.\n");
		return;
	}

	if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 ||
		ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 ||
		ft_strcmp(argv[1], "../") == 0)
	{
		ft_putstr(argv[1]);
		ft_putstr(": Is a directory.\n");
		return;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("OPEN(): A file open error occurred. No such file or directory.\n");
		return;
	}

	while ((r = read(fd, &buffer, 1)))
	{
		if (r == -1)
		{
			ft_putstr("READ(): A file read error has occurred. Check file permissions.\n");
			break;
		}
		ft_putchar(buffer);
	}

	if (close(fd) == -1)
		ft_putstr("CLOSE(): A file stream close error occurred.\n");
	else
		ft_putchar('\n');
}
