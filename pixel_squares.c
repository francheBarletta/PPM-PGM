#include <stdio.h>

int main()
{
	int x, y;
	int width = 300, height = 300;

	printf("P2\n");
	printf("# Created by firstimage.c\n");
	printf("%d %d\n", width, height);
	printf("255\n");

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			printf("%d ", ((x % 50) * (y % 50)) % 256);
		}
	}

	return 0;
}

// Una pequeña modificacion en la formula calculando el mod de x e y provoca esto
/*
Informacion importante que aprendi hoy es que Netpbm es una familia de formatos de imagen de muchos tipos y los principales son de [P1\n, P6\n]
| Código | Formato     | Tipo         | Descripción                                  |
| ------ | ----------- | ------------ | -------------------------------------------- |
| `P1`   | PBM ASCII   | Blanco/Negro | 1=negro, 0=blanco. Solo dos valores.         |
| `P2`   | PGM ASCII   | Escala gris  | Valores de gris en texto (0–255 típicamente) |
| `P3`   | PPM ASCII   | Color RGB    | 3 valores (R G B) en texto por píxel         |
| `P4`   | PBM binario | Blanco/Negro | Igual que P1, pero en binario                |
| `P5`   | PGM binario | Escala gris  | Igual que P2, pero en binario                |
| `P6`   | PPM binario | Color RGB    | Igual que P3, pero en binario                |
Muy interesante para usar en todos los programas que haga pues puedo probarlo en todos mis codigos en este particular el P1 y P2 hace cosas interesantes el resto realmente no...
hagamos otro codigo con P1 :)
*/