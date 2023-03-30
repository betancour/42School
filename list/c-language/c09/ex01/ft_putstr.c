void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    if(str)
    {
        while (*str != '\0')
        {
            ft_putchar(*str);
            str++;
        }        
    }
}