#include <stdio.h>

int main()
{
    int pixel_size = 30;
    int width = 8 * pixel_size;
    int height = 8 * pixel_size;
    int x, y;

    int art[8][8] = {
        {4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4},
        {4, 2, 2, 4, 4, 2, 2, 4},
        {4, 2, 2, 4, 4, 2, 2, 4},
        {4, 4, 4, 2, 2, 4, 4, 4},
        {4, 4, 2, 2, 2, 2, 4, 4},
        {4, 4, 2, 2, 2, 2, 4, 4},
        {4, 4, 2, 4, 4, 2, 4, 4}};

    int colores[10][3] = {
        {255, 255, 255}, // 0 blanco
        {255, 0, 0},     // 1 rojo
        {0, 0, 0},       // 2 negro
        {0, 0, 255},     // 3 azul
        {0, 255, 0},     // 4 verde
        {255, 255, 0},   // 5 amarillo
        {0, 255, 255},   // 6 celeste
        {255, 0, 255},   // 7 violeta
        {255, 165, 0},   // 8 naranja
        {128, 128, 128}  // 9 gris
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