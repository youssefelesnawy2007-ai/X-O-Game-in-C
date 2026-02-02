#include <stdio.h>
#include <ctype.h>
#include "../include/input.h"

void choosing_starting_letter(char *letter)
{
    int error_flag;
    printf("Enter 'X' or 'O' for the player 1 \n");
    do
    {
        error_flag = 0;
        scanf("%c", letter);
        letter = toupper(letter);
        if (letter == ' ' || letter == '\n' || letter == '\t' || letter == '\0')
        {
            continue;
        }
        if (letter != 'X' && letter != 'O')
        {
            error_flag = 1;
            printf("Error!..Please choose 'X' OR 'O' \n");
        }
    } while (error_flag);
}

void choosing_place(int *num, int *row, int *col)
{
    int error_flag;
    printf("Enter the number(1~9) of the place you want\n");
    do
    {
        error_flag = 0;
        scanf("%d", num);
        if (num == ' ' || num == '\n' || num == '\t' || num == '\0')
        {
            continue;
        }
        if (!(num >= 1 && num <= 9))
        {
            error_flag = 1;
            printf("Error!..Please choose a number from 1 to 9 \n");
        }
    } while (error_flag);
    *row = (*num - 1) / 3;
    *col = (*num - 1) - *row;

    // cleaning buffer from extra length user input
    while ((getchar()) != '\n')
        ;
}