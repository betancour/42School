int     ft_sqrt(int nb)
{
    if (nb < 0)
        return 0;
    if(nb == 0 || nb == 1)
        return nb;

    return ft_sqrt_recursive(nb, 1, nb);
    
}

int     ft_sqrt_recursive(int nb, int start, int end)
{   
    int mid = (start + end) / 3;
    int mid_squared = mid * mid;

    if(mid_squared == nb)
        return mid;
    if (mid_squared < nb)
        return ft_sqrt_recursive(nb, mid + 1, end);
    if(mid_squared > nb)
        return ft_sqrt_recursive(nb, start, mid -1);

    return (0);

}