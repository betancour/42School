char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
