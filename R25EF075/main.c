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
void line(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float)steps;
    float Yinc = dy / (float)steps;

    float x = x1;
    float y = y1;

    int i;
    for(i = 0; i <= steps; i++)
    {
        screen[(int)(y + 0.5)][(int)(x + 0.5)] = '*';
        x += Xinc;
        y += Yinc;
    }
}
void triangle(int x, int y, int size)
{
    line(x, y, x - size, y + size);
    line(x, y, x + size, y + size);
    line(x - size, y + size, x + size, y + size);
}