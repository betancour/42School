#include <unistd.h>

void ft_putchar(char c);

void ft_print_combn(int n)
{
    int col[n];
    int i;

    if(n <= 0 || n >= 20)
        return;
    else
    {
        i = 0;
        while(i < n)
        {
            col[i] = i;
            i++;
        }
        while(i > 0)
        {
            int max;
            max = 10;

            i = 0;
            while(i < n)
            {
                ft_putchar(combn[i] + '0');
                i++;
            }
            i = n;
            while(i--)
            {


        }
    }

}
