#include "../includes/ft_lib.h"

void ft_display_file(char *argv)
{
	int r;
	int fd;
	char buffer;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		ft_display_custom_error(errnum, argv);
	else
	{
		while ((r = read(fd, &buffer, 1)) > 0)
			ft_putchar(buffer);

		if (r == -1)
			ft_display_custom_error(errnum, argv);

		if (close(fd) == -1)
			ft_display_custom_error(errnum, argv);
	}
}
