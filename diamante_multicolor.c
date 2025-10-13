#include <stdio.h>

int main()
{
    int pixel_size = 40;
    int width = 8 * pixel_size;
    int height = 8 * pixel_size;
    int x, y;

    int colores[6][3] = {
        {255, 255, 255}, // 0 blanco
        {255, 0, 0},     // 1 rojo
        {0, 255, 0},     // 2 verde
        {0, 0, 255},     // 3 azul
        {255, 255, 0},   // 4 amarillo
        {0, 0, 0}        // 5 negro
    };

    int art[8][8] = {
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 1, 2, 2, 2, 2, 1, 0},
        {1, 2, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 2, 1},
        {0, 1, 2, 2, 2, 2, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 0}
    };

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

            printf("%d %d %d ",
                   colores[color][0],
                   colores[color][1],
                   colores[color][2]);
            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}

/*
gcc pixelart.c -o pixelart
./pixelart > pixelart.ppm
convert pixelart.ppm pixelart.png 
*/
