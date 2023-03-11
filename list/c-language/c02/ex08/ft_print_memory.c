#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_print_ascii(unsigned char c)
{
	if (c >= 32 && c <= 126)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	ft_print_memory(const void *addr, size_t size)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			ft_putnbr_hex(ptr[i + j]);
			if (j % 2)
				ft_putchar(' ');
			j++;
		}
		while (j < 16)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			if (j % 2)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			ft_print_ascii(ptr[i + j]);
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
}

