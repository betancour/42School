#include <stdlib.h>

int     ft_atoi_base(char *str, char *base);
int     ft_strlen(char *str);
int     ft_check_base(char *base);
char    *ft_itoa_base(int nb, char *base);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int     nbr_int;
    char    *result;

    if (!ft_check_base(base_from) || !ft_check_base(base_to))
        return (NULL);
    nbr_int = ft_atoi_base(nbr, base_from);
    result = ft_itoa_base(nbr_int, base_to);
    return (result);
}
