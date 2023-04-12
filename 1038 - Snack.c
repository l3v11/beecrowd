#include <stdio.h>

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    if (x == 1) {
        printf("Total: R$ %.2f\n", (float) y * 4);
    } else if (x == 2) {
        printf("Total: R$ %.2f\n", (float) y * 4.5);
    } else if (x == 3) {
        printf("Total: R$ %.2f\n", (float) y * 5);
    } else if (x == 4) {
        printf("Total: R$ %.2f\n", (float) y * 2);
    } else if (x == 5) {
        printf("Total: R$ %.2f\n", (float) y * 1.5);
    }

    return 0;
}