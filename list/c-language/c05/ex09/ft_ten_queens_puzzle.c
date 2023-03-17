#include <unistd.h>

int     ft_is_safe(int board[], int row, int col)
{
    int i;

    i = 0;
    while (i < row)
    {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row)
            return (0);
        i++;
    }
    return (1);
}

void    ft_print_board(int board[], int size)
{
    int i;
    char c;

    i = 0;
    while (i < size)
    {
        c = board[i] + '0';
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}

void    ft_place_queen(int board[], int row, int size, int *count)
{
    int col;

    col = 0;
    while (col < size)
    {
        if (ft_is_safe(board, row, col))
        {
            board[row] = col;
            if (row == size - 1)
            {
                ft_print_board(board, size);
                (*count)++;
            }
            else
                ft_place_queen(board, row + 1, size, count);
        }
        col++;
    }
}

int     ft_ten_queens_puzzle(void)
{
    int board[10];
    int count;

    count = 0;
    ft_place_queen(board, 0, 10, &count);
    return (count);
}
