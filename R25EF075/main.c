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
void rectangle(int x, int y, int w, int h)
{
    int i, j;

    for(j = x; j < x + w; j++)
    {
        screen[y][j] = '*';
        screen[y + h - 1][j] = '*';
    }

    for(i = y; i < y + h; i++)
    {
        screen[i][x] = '*';
        screen[i][x + w - 1] = '*';
    }
}