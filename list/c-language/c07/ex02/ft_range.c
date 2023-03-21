#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i;

    if(start > end)
        return(NULL);
    range = (int *)malloc(sizeof(int) * (end - start + 1));
    if(range == NULL)
        return (NULL);
    i = 0;
    while(start <= end)
    {
        range[i] = start;
        start++;
        i++;
    }
    return (range);
}
