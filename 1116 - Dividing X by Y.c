#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int t, x, y;
    float div;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);

        div = (float)x / (float)y;

        if (isinf(div) || isnan(div)) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", div);
        }
    }

    return 0;
}