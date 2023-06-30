int	ft_strlen(char	*str);

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	dest_len = ft_strlen(dest);
	unsigned int	src_len = ft_strlen(src);
	unsigned int	i;

	if (size <= dest_len)
		return src_len + size;

	for (i = 0; i < size - dest_len - 1 && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0'; // add null byte at end

	return dest_len + src_len;
}

