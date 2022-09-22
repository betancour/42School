#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	index;

	index = '0';
	while (index <= '9')
	{
		ft_putchar(index);
		index++;
	}
}
