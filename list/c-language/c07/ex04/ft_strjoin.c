#include <stdlib.h>

int ft_strlen(char const *str)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (str[i])
    {
        i++;
        j++;
    }
    return (j);
}

char    *ft_strcat(char *dest, char *src)
{
    int     i;
    int     j;

    i = ft_strlen(dest);
    j = 0;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);

}

char   *ft_strjoin(char const *s1, char const *s2)
{
    if(!s1 || !s2)
        return (NULL);
    char *res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if(!res)
        return (NULL);
    res[0] = '\0';
    ft_strcat(res, (char *)s1);
    ft_strcat(res, (char *)s2);
    return (res);
}
