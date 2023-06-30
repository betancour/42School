#include <unistd.h>
#include <limits.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	if(nb == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if(nb >= 10)
	{
		ft_putnbr(nb /  10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}
