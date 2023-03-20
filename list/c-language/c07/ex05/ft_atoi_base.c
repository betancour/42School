int     ft_atoi_base(const char *str, int str_base)
{
    int     result;
    int     sign;

    result = 0;
    sign = 1;
    if(*str == '-')
    {
        sign = -1;
        str++;
    }
    while(*str)
    {
        result = result * str_base;
        if(*str >= '0' && *str <= '9')
            result += *str - '0';
        else if(*str >= 'a' && *str <= 'z')
            result += *str - 'a' + 10;
        else if(*str >= 'A' && *str <= 'Z')
            result += *str - 'A' + 10;
        else 
            return (0);
        str++;
    }
    return (result * sign);

}
