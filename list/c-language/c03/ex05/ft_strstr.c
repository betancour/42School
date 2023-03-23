#include <stddef.h>

char    *ft_strstr(char *str, char *to_find)
{
    if(*to_find == '\0')
        return(str);
    while(*str != '\0')
    {
        if(*str == *to_find)
        {
            char    *temp_str = str;
            char    *temp_to_find = to_find;
            while(*temp_str == *temp_to_find && *temp_str != '\0' && *temp_to_find != '\0')
            {
                temp_str++;
                temp_to_find++;
            }
            if(*temp_to_find == '\0')
                return (str);
        }       
        str++;
    }
    return(NULL);
}
