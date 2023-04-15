#include <stdio.h>

int main() {

    int num[5], evenCount=0;

    for (int i=0; i<5; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            evenCount += 1;
        }
    }

    printf("%d valores pares\n", evenCount);

    return 0;
}