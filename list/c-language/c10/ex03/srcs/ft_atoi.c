int     ft_atoi(const char *str)
{
    int     sign;
    int     number;

    sign = 1;
    number = 0;

    while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
        str++;

    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str && (*str >= '0' && *str <= '9'))
    {
        number = number * 10 + (*str - '0');
        str++;
    }

    return (number * sign);
}
