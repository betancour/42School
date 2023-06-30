#include "../includes/ft_lib.h"

#include "../includes/ft_lib.h"

void ft_stdin(void)
{
	char buffer;
	int r;

	while ((r = read(0, &buffer, 1)))
	{
		if (r == -1)
		{
			ft_putstr((char *)ft_get_strerr(errnum));
			break;
		}
		else
			ft_putchar(buffer);
	}
}
