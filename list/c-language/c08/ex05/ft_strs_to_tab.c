#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int i;

	i = o;
	while (str[i])
	{
		i++;
		return (i);
	}
}

char *ft_strdup(char *src)
{
	char *dest;
	int i;

	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *arr;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
