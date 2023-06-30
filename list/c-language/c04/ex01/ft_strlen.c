int	ft_strlen(char	*str)
{
	unsigned int	len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return (len);
}
