#include <stdio.h>

int main() {
    int ancho = 600;
    int alto = 400;
    int i = 0, j = 0;
    int franja_alto = alto / 3;

    FILE *archivo = fopen("bandera_argentina.ppm", "w");

    fprintf(archivo, "P3\n");
    fprintf(archivo, "%d %d\n", ancho, alto);
    fprintf(archivo, "255\n");

    while (i < alto) {
        j = 0;
        while (j < ancho) {
            if (i < franja_alto || i >= 2 * franja_alto) {
                fprintf(archivo, "116 172 223 ");
            } else {
                fprintf(archivo, "255 255 255 ");
            }
            j++;
        }
        fprintf(archivo, "\n");
        i++;
    }

    fclose(archivo);
    return 0;
}
