#include <stdio.h>

int main() {

    int n, rem;

    scanf("%d", &n);

    printf("%d\n", n);

    printf("%d nota(s) de R$ 100,00\n", n / 100);
    rem = n % 100;

    printf("%d nota(s) de R$ 50,00\n", rem / 50);
    rem %= 50;

    printf("%d nota(s) de R$ 20,00\n", rem / 20);
    rem %= 20;

    printf("%d nota(s) de R$ 10,00\n", rem / 10);
    rem %= 10;

    printf("%d nota(s) de R$ 5,00\n", rem / 5);
    rem %= 5;

    printf("%d nota(s) de R$ 2,00\n", rem / 2);
    rem %= 2;

    printf("%d nota(s) de R$ 1,00\n", rem / 1);

    return 0;
}