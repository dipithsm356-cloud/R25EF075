#include <stdio.h>
#include <math.h>

#define ROWS 30
#define COLS 60

char screen[ROWS][COLS];

void initialize()
{
    int i, j;
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            screen[i][j] = '_';
}
void display()
{
    int i, j;
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
            printf("%c", screen[i][j]);
        printf("\n");
    }
}