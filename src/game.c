int checking_win(char board[3][3])
{
    // returns 1 for X , 2 for O , 0 for no winning .

    // checking each row.
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] == board[i][2])
        {
            if (board[i][0] == 'X')
            {
                return 1;
            }
            else if (board[i][0] == 'O')
            {
                return 2;
            }
        }
    }
    // checking each col.

    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] == board[2][i])
        {
            if (board[0][i] == 'X')
            {
                return 1;
            }
            else if (board[0][i] == 'O')
            {
                return 2;
            }
        }
    }
    // checking main diagonal.
    if (board[0][0] == board[1][1] == board[2][2])
    {
        if (board[0][0] == 'X')
        {
            return 1;
        }
        else if (board[0][0] == 'O')
        {
            return 2;
        }
    }

    // checking secondary diagonal.
    if (board[0][2] == board[1][1] == board[2][0])
    {
        if (board[0][0] == 'X')
        {
            return 1;
        }
        else if (board[0][0] == 'O')
        {
            return 2;
        }
    }

    return 0;
}

int checking_draw(char board[3][3])
{
    int draw_flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            draw_flag = 0;
            if (!checking_win(board) && (board[i][j] == 'X' || board[i][j] == 'O'))
            {
                draw_flag = 1;
            }
        }
    }
    if (draw_flag)
        return 1;
    else
        return 0;
}