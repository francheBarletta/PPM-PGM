#include <stdio.h>
#include <math.h>

int main()
{
    int width = 300, height = 300;
    int x, y;

    printf("P3\n");
    printf("# Coseno en el canal azul\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            int r = 50;
            int g = 100;
            int b = (cos(x * 0.1 + y * 0.05) + 1) * 127.5;
            printf("%d %d %d ", r, g, b);
            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}
