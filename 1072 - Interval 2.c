#include <stdio.h>

int main() {

    int n, num[10000], numIn=0, numOut=0;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &num[i]);

        if (num[i] >= 10 && num[i] <= 20) {
            numIn += 1;
        } else {
            numOut += 1;
        }
    }

    printf("%d in\n%d out\n", numIn, numOut);

    return 0;
}