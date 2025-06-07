#include <stdio.h>

int main()
{
    int width = 300, height = 300;
    int x, y;
    printf("P3\n");
    printf("# Diagonal gradient with checkered pattern.\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            int grey = ((x + y) * 255) / (width + height - 2);

            int color;
            if (((x / 20) + (y / 20)) % 2 == 0)
            {
                color = 255;
            }
            else
            {
                color = 0;
            }
            int red = (grey + color) / 2;
            int green = (grey + (255 - color)) / 2;
            int blue = (255 - grey + color) / 2;

            printf("%d %d %d ", red, green, blue);

            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}

/*
El formato PPM (Portable Pixmap) funciona usando el modelo de color RGB (rojo, verde y azul).
Cada pixel está representado por 3 valores enteros que van de 0 a 255, uno para cada canal
Por este motivo es que no puedo generar un ajedrez blanco y negro con algunos tonos grices

comando usado para ejecutar imagenes tipo ppm: ./chess > chess.gcc
comando para pasar imagenes .gcc a png: convert chess.gcc chess.png
terminal feedback: WARNING: The convert command is deprecated in IMv7, use "magick" instead of "convert" or "magick convert"
*/