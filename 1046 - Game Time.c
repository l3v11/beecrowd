#include <stdio.h>

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    if (x >= y) {
        printf("O JOGO DUROU %d HORA(S)\n", (y + 24) - x);
    } else if (x < y) {
        printf("O JOGO DUROU %d HORA(S)\n", y - x);
    }

    return 0;
}