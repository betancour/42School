#include <stdlib.h>

int     ft_atoi_base(char *str, char *base);
int     ft_strlen(char *str);
int     ft_check_base(char *base);
char    *ft_itoa_base(int nb, char *base);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int     num;
    char    *res;
    int     i;

    num = ft_atoi_base(nbr, base_from);
    res = ft_itoa_base(num, base_to);
    if (num == 0)
    {
        res = (char *)malloc(2 * sizeof(char));
        res[0] = base_to[0];
        res[1] = '\0';
    }
    if (num < 0)
    {
        i = ft_strlen(res);
        while (i >= 0)
        {
            res[i + 1] = res[i];
            i--;
        }
        res[0] = '-';
    }
    return (res);
}
