#include <stdio.h>

int main() {

    int num[5], evenCount=0, oddCount=0, posCount=0, negCount=0;

    for (int i=0; i<5; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            evenCount += 1;
        }
        if (num[i] % 2 != 0) {
            oddCount += 1;
        }
        if (num[i] > 0) {
            posCount += 1;
        }
        if (num[i] < 0) {
            negCount += 1;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n", evenCount, oddCount);
    printf("%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", posCount, negCount);

    return 0;
}