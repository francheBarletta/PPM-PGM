#include <stdio.h>

int main()
{
    int pixel_size = 30;
    int width = 8 * pixel_size;
    int height = 8 * pixel_size;
    int x, y;

    int art[8][8] = {
        {2, 1, 2, 2, 2, 2, 1, 2},
        {2, 1, 1, 2, 2, 1, 1, 2},
        {1, 2, 1, 1, 1, 1, 2, 1},
        {2, 2, 1, 1, 1, 1, 2, 2},
        {4, 5, 4, 1, 1, 4, 5, 4},
        {1, 2, 2, 1, 1, 2, 2, 1},
        {2, 1, 1, 2, 2, 1, 1, 2},
        {1, 2, 2, 2, 2, 2, 2, 1}};

    int colores[10][3] = {
        {255, 255, 255}, // 0 blanco
        {40, 40, 40},    // 1 gris oscuro
        {0, 0, 0},       // 2 negro
        {80, 80, 80},    // 3 gris medio
        {60, 0, 60},     // 4 violeta oscuro
        {120, 0, 130},   // 5 violeta medio
        {200, 80, 255},  // 6 violeta claro
        {0, 0, 255},     // 7 azul (por si querés)
        {255, 165, 0},   // 8 naranja
        {128, 128, 128}  // 9 gris estándar
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
