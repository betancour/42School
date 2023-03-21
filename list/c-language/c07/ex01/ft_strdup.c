#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    char *copy;
    size_t len;
    size_t i;

    len = 0;
    while(s1[len])
        len++;
    copy = (char*)malloc(sizeof(char)*(len + 1));
    if(!copy)
        return (NULL);
    i = 0;
    while(i < len)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return(copy);
}
