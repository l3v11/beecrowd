#include <stdio.h>

int main() {

    int num, hours;
    float amountPerHr;

    scanf("%d\n%d\n%f", &num, &hours, &amountPerHr);

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", (float) hours * amountPerHr);

    return 0;
}