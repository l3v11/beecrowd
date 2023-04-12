#include <stdio.h>

int main() {

    char name;
    double salary, sale, total;

    scanf("%[^\n]%*c", &name);
    scanf("%lf\n%lf", &salary, &sale);

    total = salary + (sale * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}