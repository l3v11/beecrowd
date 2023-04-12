#include <stdio.h>

int main() {

    int prodCode1, unitsOfProd1, prodCode2, unitsOfProd2;
    float price1, price2, total;

    scanf("%d %d %f", &prodCode1, &unitsOfProd1, &price1);
    scanf("%d %d %f", &prodCode2, &unitsOfProd2, &price2);

    total = (unitsOfProd1 * price1) + (unitsOfProd2 * price2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}