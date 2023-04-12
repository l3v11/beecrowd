#include <stdio.h>

int main() {

    int rem;
    double n;

    scanf("%lf", &n);

    int note = n;
    int coin = (n - note) * 100;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", note / 100);
    rem = note % 100;

    printf("%d nota(s) de R$ 50.00\n", rem / 50);
    rem %= 50;

    printf("%d nota(s) de R$ 20.00\n", rem / 20);
    rem %= 20;

    printf("%d nota(s) de R$ 10.00\n", rem / 10);
    rem %= 10;

    printf("%d nota(s) de R$ 5.00\n", rem / 5);
    rem %= 5;

    printf("%d nota(s) de R$ 2.00\n", rem / 2);
    rem %= 2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", rem);

    printf("%d moeda(s) de R$ 0.50\n", coin / 50);
    rem = coin % 50;

    printf("%d moeda(s) de R$ 0.25\n", rem / 25);
    rem %= 25;

    printf("%d moeda(s) de R$ 0.10\n", rem / 10);
    rem %= 10;

    printf("%d moeda(s) de R$ 0.05\n", rem / 5);
    rem %= 5;

    printf("%d moeda(s) de R$ 0.01\n", rem);

    return 0;
}