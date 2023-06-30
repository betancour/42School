int is_divisible(int nb, int divisor)
{
	if (divisor == 1)
		return 0;
	if (nb % divisor == 0)
		return 1;
	return is_divisible(nb, divisor - 1);
}

int ft_is_prime(int nb)
{
	if (nb <= 1)
		return 0;
	if (nb == 2 || nb == 3)
		return 1;
	return !is_divisible(nb, nb - 1);
}
