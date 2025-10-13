#include <stdio.h>

int main()
{
    int pixel_size = 50;
    int width = 4 * pixel_size;
    int height = 4 * pixel_size;
    int x, y;

    // Hagamos una matriz (primera vez) para poder hacer este pixel art basico (4x4)
    // Siendo 0 = blanco, 1 = rojo, 2 = negre
    int art[4][4] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 0}};

    printf("P3\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < width)
    {
        x = 0;
        while (x < width)
        {
            int cx = x / pixel_size;
            int cy = y / pixel_size;

            int color = art[cy][cx];

            if (color == 0)
                printf("255 255 255 ");
            if (color == 1)
                printf("255 0 0 ");
            if (color == 2)
                printf("0 0 0 ");

            x++;
        }

        printf("\n");
        y++;
    }
    return 0;
}