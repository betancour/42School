
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 1;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_strlen(char *str)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (str[i])
    {
        i++;
        j++;
    }

    return (j);
}

int     ft_check_base(char *base)
{
    int     i;
    int     j;

    if (ft_strlen(base) < 2)
        return (0);

    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }

    return (1);
}

char    *ft_itoa_base(int value, int base)
{
    char    *str;
    char    *base_str;
    long    nbr;
    int     len;

    if (value == 0)
        return (0);

    base_str = "0123456789ABCDEF";
    nbr = value;
    len = (nbr <= 0 && base == 10) ? 1 : 0;

    while (nbr != 0)
    {
        nbr /= base;
        len++;
    }

    str = (char *)malloc(sizeof(char) * (len + 1));
    str[len] = '0';
    if (value < 0 && base == 10)
        str[0] = '-';
    nbr = (value < 0) ? -(long)value : value;

    while (nbr != 0)
    {
        str[--len] = base_str[nbr % base];
        nbr /= base;
    }

    return (str);
}

int     ft_atoi_base(char *str, char *base)
{
    int     sign;
    int     res;
    int     i;
    int     j;

    sign = 1;
    res = 0;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (ft_check_base(base) && str[i])
    {
        j = 0;
        while (base[j] && str[i] != base[j])
            j++;
        if (base[j])
            res = res * ft_strlen(base) + j;
        else
            break;
        i++;
    }

    return (sign * res);
}