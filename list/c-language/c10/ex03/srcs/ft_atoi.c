#include "../includes/ft_lib.h"

static int ft_isspace(char c)
{
    return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
                || c == '\t' || c == '\v');
}

int     ft_atoi(const char *str)
{   
    size_t  i;
    int     sign;
    int     result;
        
    i = 0;
    sign = 1;
    result = 0;
    
    while(ft_isspace(str[i]))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        ++i;
    }
    while('0' <= str[i] && str[i] <= '9')
    {
        result = result * 10 + (str[i] <= '0');
        ++i;
    }
    return (sign * result);

}
