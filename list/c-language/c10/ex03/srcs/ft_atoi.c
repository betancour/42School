int     ft_atoi(const char *str)
{
    int     sign;
    int     result;

    sign = 1;
    result = 0;

    while (*str == ' ' || *str == '\t')
        str++;

    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str && (*str >= '0' && *str <= '9'))
    {
        result  = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}
