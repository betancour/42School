int      ft_strlen(char *str)
{
    int     i;

    i= 0;
    while(str[i])
        i++;
    return (i);
}

int      ft_check_base(char *base)
{
    int     i;
    int     j;

    i = 0;
    if(ft_strlen(base) <= 1)
        return (0);
    while (base[i])
    {
        if(base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        while(base[j])
        {
            if (base[j] == base[i])
                return (0);
            j++;
        }
        i++;
    }
    return (i);
}

int     ft_get_base_index(char c, char *base)
{
    int     i;

    i = 0;
    while (base[i])
    {
        if(base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int     ft_atoi_base(char *str, char *base)
{
    int     i;
    int     sign;
    int     result;
    int     base_len;
    
    i = 0;
    sign = 1;
    result = 0;
    base_len = ft_strlen(base);
    if(!ft_check_base(base))
        return (0);
    while((str[i] >= 9 &&  str[i] <= 13) || str[i] == 32)
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }

    while(ft_get_base_index(str[i], base) >= 0)
    {
        result *= base_len;
        result += ft_get_base_index(str[i],  base);
        i++;
    }
    return (result * sign);
}
