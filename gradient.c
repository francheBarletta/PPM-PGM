#include <stdio.h>

int main(){
    int width = 300, height = 300;
    int x, y;
    printf("P3\n");
    printf("# Horizontal gradient red to blue.\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    y = 0;
    while (y < height) {
        x = 0;
        while (x < width) {
            int blue = (x * 255) / (width - 1);
            int black = 0;
            int green = 255 - black;
            printf("%d %d %d ", blue, black, green);
            x++;
        }
        printf("\n");
        y++;
    }
    return 0;
}