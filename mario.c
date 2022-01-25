#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, column, space;
    //'do while' loop for acceps only numbers from 1 to 8...
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //rows a each 'for' loop...
    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            //space in each row...
            printf(" ");
        }
        //each column...
        for (column = 0; column <= row; column++)
        {
            //print a brick...
            printf("#");
        }
        //the spaces after the hash line are a constant, so...
        printf("  ");
        //now the same pattern on the for loop above...
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        //for each new line
        printf("\n");
    }
}

