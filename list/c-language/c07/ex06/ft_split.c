#include <stdlib.h>

int     ft_is_sep(char c, char *charset)
{
    while (*charset)
    {
        if(c == *charset)        
            return(1);
        charset++;
    }
    return (0);
}

int     ft_word_count(char *str, char *charset)
{
    int     count;
    int     word;

    count = 0;
    word = 0;
    while(*str)
    {
        if(ft_is_sep(*str, charset))
            word = 0;
        else if (!word)
        {
            word = 1;
            count++;
        }
        str++;
    }
    return (count);
}

char    *ft_strndup(char *src, int n)
{
    char    *dest;
    int     i;

    dest =(char*)malloc(sizeof(char) * (n + 1));
    if(!dest)
        return(NULL);
    i = 0;
    while(i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    **ft_split(char *str, char *charset)
{
    char    **res;
    int     i;
    int     j;
    int     k;

    res = (char **)malloc(sizeof(char *) *(ft_word_count(str, charset) + 1));
    if(!res)
        return (NULL);
    i = -1;
    j = 0;
    while(str[++i])
    {
        if(!ft_is_sep(str[i], charset))
        {
            k = 0;
            while (str[i + k] && !ft_is_sep(str[i + k], charset))
                k++;
            res[j] = ft_strndup(str + i, k);
            if(!res[j])
                return(NULL);
            i += k - 1;
            j++;
        }
    }
    res[j] = NULL;
    return  (res);
}