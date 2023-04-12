#include <stdio.h>

int main() {

    int n, yr, mon, day;

    scanf("%d", &n);

    yr = n / 365;
    mon = (n % 365) / 30;
    day = n % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", yr, mon, day);

    return 0;
}