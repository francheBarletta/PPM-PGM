#include <stdio.h>
#include <math.h>

int main()
{
    int width = 300, height = 300;
    int x, y;

    printf("P3\n");
    printf("# Ondas concéntricas en el canal azul\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    float frecuencia = 20.15;
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

            int r = 0;
            int g = 0;
            int b = sin(dist * frecuencia) * amplitud + offset;
            printf("%d %d %d ", r, g, b);

            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}

/*
| Color        | R (rojo) | G (verde) | B (azul) | Descripción                   |
| ------------ | -------- | --------- | -------- | ----------------------------- |
| **Negro**    | 0–30     | 0–30      | 0–30     | Muy oscuro, casi sin color    |
| **Gris**     | 80–200   | 80–200    | 80–200   | Valores parecidos en R, G y B |
| **Blanco**   | 220–255  | 220–255   | 220–255  | Muy claro, todos altos        |
| **Rojo**     | 150–255  | 0–80      | 0–80     | Predomina rojo                |
| **Verde**    | 0–80     | 150–255   | 0–80     | Predomina verde               |
| **Azul**     | 0–80     | 0–80      | 150–255  | Predomina azul                |
| **Amarillo** | 150–255  | 150–255   | 0–50     | Rojo y verde, sin azul        |
| **Cian**     | 0–80     | 150–255   | 150–255  | Verde y azul, sin rojo        |
| **Magenta**  | 150–255  | 0–80      | 150–255  | Rojo y azul, sin verde        |
| **Naranja**  | 180–255  | 100–160   | 0–50     | Rojo fuerte, algo de verde    |
| **Violeta**  | 120–200  | 0–60      | 130–255  | Azul y rojo, tenue en verde   |
| **Rosa**     | 220–255  | 100–150   | 180–255  | Rojo fuerte + azul intermedio |

cuadro de colores a usar ;) parece joda pero recien aprendo colores RGB y como aplican en los monitores es re loco que los colores primarios en un monitor sean esos, fascinante
*/