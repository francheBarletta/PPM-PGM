#include <stdio.h>
#include <math.h>

int main()
{
    int width = 300, height = 300;
    int x, y;

    printf("P3\n");
    printf("# Sen fucntion\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            int r = (sin(x * 0.1) + 1) * 127.5;
            int g = 100;
            int b = 150;
            printf("%d %d %d ", r, g, b);
            x++;
        }
        printf("\n");
        y++;
    }
    return 0;
}

/*
gcc sen_x.c -o sen_x -lm
./sen_x > sen_x.ppm
convert sen_x.ppm sen_x.png
*/