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
			printf("%d ", ((x + 100) * (y + 100)) % 256);
		}
	}

	return 0;
}