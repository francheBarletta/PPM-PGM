#include <stdio.h>

int main()
{
	int x, y;
	int width = 500, height = 500;

	printf("P1\n");
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
/*
Codigo igual a pixel_squares pero solo cambie P1/n el cual el mismo solo toma valores blanco y negro, blanco = 0, negro = 1.
*/