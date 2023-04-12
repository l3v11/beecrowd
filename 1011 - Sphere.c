#include <stdio.h>
#include <math.h>

int main() {

    double num, sphere;

    scanf("%lf", &num);

    sphere = (4.0/3) * 3.14159 * pow(num, 3);

    printf("VOLUME = %.3lf\n", sphere);

    return 0;
}