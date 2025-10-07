#include <stdio.h>

int main()
{
    int pixel_size = 30;
    int width = 10 * pixel_size;
    int height = 10 * pixel_size;
    int x, y;

    // Hagamos una matriz (primera vez) para poder hacer este pixel art basico (4x4)
    // Siendo 0 = blanco, 1 = rojo, 2 = negre
    int art[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 2, 0, 0, 0, 0, 2, 2, 0},
        {0, 2, 2, 0, 0, 0, 0, 2, 2, 0},
        {0, 8, 8, 8, 8, 8, 8, 8, 8, 0},
        {0, 8, 8, 8, 8, 8, 8, 8, 8, 0},
        {0, 8, 8, 8, 8, 8, 8, 8, 8, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    printf("P3\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            int cx = x / pixel_size;
            int cy = y / pixel_size;

            int color = art[cy][cx];

            if (color == 0) // blanco
                printf("255 255 255 ");
            if (color == 1) // rojo
                printf("255 0 0 ");
            if (color == 2) // negro
                printf("0 0 0 ");
            if (color == 3) // azul
                printf("0 0 255 ");
            if (color == 4) // verde
                printf("0 255 0 ");
            if (color == 5) // amarillo
                printf("255 255 0 ");
            if (color == 6) // celeste
                printf("0 255 255 ");
            if (color == 7) // violeta
                printf("255 0 255 ");
            if (color == 8) // naranja
                printf("255 165 0 ");
            if (color == 9) // gris
                printf("128 128 128 ");
            x++;
        }

        printf("\n");
        y++;
    }
    return 0;
}