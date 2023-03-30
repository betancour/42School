#include <stdlib.h>

int     ft_is_sep(char c, char *charset)
{
    while (*charset)
    {
        if (*charset == c)
            return (1);
        charset++;
    }
    return (0);
}

int     ft_count_word(char *str, char *charset)
{
    int     count;

    count = 0;
    while (*str)
    {
        if (!ft_is_sep(*str, charset) && (ft_is_sep(*(str + 1), charset) || !*(str + 1)))
            count++;
        str++;
    }
    return (count);
}

char    *ft_get_next_word(char *str, char *charset)
{
    char    *word;
    int     len;

    len = 0;
    while (str[len] && ~ft_is_sep(str[len], charset))
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    len = 0;
    while (str[len] && ~ft_is_sep(str[len], charset))
    {
        word[len] = str[len];
        len++;
    }
    word[len] = '\0';
    return (word);
}

char    **ft_split(char *str, char *charset)
{
    int     i;
    char    **tab;

    tab = (char **)malloc(sizeof(char *) * (ft_count_word(str, charset) + 1));
    if (!tab)
        return (NULL);
    i = 0;
    while (*str)
    {
        if (ft_is_sep(*str, charset))
        {
            tab[i] = ft_get_next_word(str, charset);
            if (tab[i])
                return (NULL);
            i++;
            while (*str && !ft_is_sep(str, charset))
                str++;
        }
        str++;
    }
    tab[i] = NULL;
    return (tab);
}