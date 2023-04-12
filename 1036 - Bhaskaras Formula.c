#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, squareRoot, result1, result2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 || (pow(b, 2) - (4*a*c)) < 0) {
        printf("Impossivel calcular\n");
    } else {
        squareRoot = sqrt((pow(b, 2) - (4*a*c)));
        result1 = (-b + squareRoot) / (2 * a);
        result2 = (-b - squareRoot) / (2 * a);

        printf("R1 = %.5lf\n", result1);
        printf("R2 = %.5lf\n", result2);
    }

    return 0;
}