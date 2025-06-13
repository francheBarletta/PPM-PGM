#include <stdio.h>
#include <math.h>

int main()
{
    int width = 300, height = 300;
    int x, y;
    int cx = width / 2;
    int cy = width / 2;

    printf("P3\n");
    printf("# Gradiante circular. \n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < height)
        {
            int dx = x - cx;
            int dy = y - cy;
            int dist = sqrt(dx * dx + dy * dy);

            int r = (dist * dist) % 256;
            int g = (dist * 2) % 256;
            int b = (dist * 5) % 256;

            printf("%d %d %d ", r, g, b);
            x++;
        }
        printf("\n");
        y++;
    }
    return 0;
}