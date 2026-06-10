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
void circle(int xc, int yc, int r)
{
    int x, y;

    for(y = 0; y < ROWS; y++)
    {
        for(x = 0; x < COLS; x++)
        {
            int d = (x - xc) * (x - xc) +
                    (y - yc) * (y - yc);

            if(abs(d - r * r) <= r)
                screen[y][x] = '*';
        }
    }
}
void eraseArea(int x, int y, int w, int h)
{
    int i, j;

    for(i = y; i < y + h && i < ROWS; i++)
        for(j = x; j < x + w && j < COLS; j++)
            screen[i][j] = '_';
}
int main()
{
    int choice;

    initialize();

    while(1)
    {
        printf("\n===== 2D GRAPHICS EDITOR =====\n");
        printf("1. Draw Rectangle\n");
        printf("2. Draw Line\n");
        printf("3. Draw Triangle\n");
        printf("4. Draw Circle\n");
        printf("5. Delete Area\n");
        printf("6. Display Picture\n");
        printf("7. Clear Picture\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 0)
            break;
             switch(choice)
        {
            case 1:
            {
                int x, y, w, h;
                printf("Enter x y width height: ");
                scanf("%d%d%d%d", &x, &y, &w, &h);
                rectangle(x, y, w, h);
                break;
            }
             case 2:
            {
                int x1, y1, x2, y2;
                printf("Enter x1 y1 x2 y2: ");
                scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
                line(x1, y1, x2, y2);
                break;
            }
            case 3:
            {
                int x, y, s;
                printf("Enter top_x top_y size: ");
                scanf("%d%d%d", &x, &y, &s);
                triangle(x, y, s);
                break;
            }
            

