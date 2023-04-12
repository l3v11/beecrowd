#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, tri, cir, trap, quad, rect;

    scanf ("%lf %lf %lf", &a, &b, &c);

    tri = 0.5 * a * c;
    cir = 3.14159 * pow(c, 2);
    trap = 0.5 * (a + b) * c;
    quad = pow(b, 2);
    rect = a * b;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", rect);

    return 0;
}