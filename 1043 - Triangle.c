#include <stdio.h>

int main() {

    float x, y, z, area;

    scanf("%f %f %f", &x, &y, &z);

    if ( ( (x + y) > z) && ( (y + z) > x ) && ( (x + z) > y )) {
        printf("Perimetro = %.1f\n", x + y + z);
    } else {
        area = 0.5 * (x + y) * z;
        printf("Area = %.1f\n", area);
    }

    return 0;
}