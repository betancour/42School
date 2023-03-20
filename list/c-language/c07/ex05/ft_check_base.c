int      ft_strlen(const char *str);

int     ft_check_base(char *base)
{
    int     i;
    int     j;

    if (ft_strlen(base) <2)
        return(0);
    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-' )
            return(0);
        j = i + 1;
        while(base[j])
        {
            if(base[i] == base[j])
                return(0);
            j++;
        }
        i++;
    }
    return(1);
}
