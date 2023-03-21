#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int     i;
    int     *arr;
    int     size;

    if(min >= max)
    {
        *range = (NULL);
        return (0);
    }
    size = max - min;
    arr = (int *)malloc(size * sizeof(int));
    if(!arr)
    {
        *range = NULL;
        return (-1);
    }
    i = 0;
    while(min < max)
    {
        arr[i] = min;
        i++;
        min++;     
    }
    *range = arr;
    return (size);
}
