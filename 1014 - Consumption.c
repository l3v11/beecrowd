#include <stdio.h>

int main() {

    int x;
    float y;

    scanf("%d\n%f", &x, &y);

    printf("%.3f km/l\n", (float) x / y);

    return 0;
}