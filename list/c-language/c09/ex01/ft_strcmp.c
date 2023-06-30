int ft_strcmp(char *src1, char *src2)
{
	int i;

	i = 0;
	while (src1[i] != '\0' && src2[i] != '\0')
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (src1[i] - src2[i]);
}
