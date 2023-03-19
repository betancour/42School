#include <unistd.h>

void    ft_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int     ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void    ft_print_params(int argc, char **argv)
{
    int i;

    i = 1;
    while(i < argc)
    {
        while(*argv[i])
        {
            write(1, argv[i],1 );
            argv[i]++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while(i < argc)
    {
        j = i + 1;
        while(j < argc)
        {
            if(ft_strcmp(argv[i], argv[j]) > 0)
                ft_swap(&argv[i], & argv[j]);
            j++;
        }
        i++;
    }
    ft_print_params(argc, argv);
    return (0);
}
