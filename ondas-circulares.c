#include <stdio.h>
#include <math.h>

int main()
{
    int width = 300, height = 300;
    int x, y;

    printf("P3\n");
    printf("# Ondas circulares :)\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    float frecuencia = 0.15;
    float amplitud = 127.5;
    float offset = 127.5;

    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            int dx = x - width / 2;
            int dy = y - height / 2;
            float dist = sqrt(dx * dx + dy * dy);

            int r = 20;
            int g = 180;
            int b = sin(dist * frecuencia) * amplitud + offset;
            printf("%d %d %d ", r, g, b);

            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}
