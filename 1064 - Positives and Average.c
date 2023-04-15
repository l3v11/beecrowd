#include <stdio.h>

int main() {

    float num[6], posTotal=0;
    int posCount=0;

    for (int i=0; i<6; i++) {
        scanf("%f", &num[i]);
        if (num[i] > 0) {
            posCount += 1;
            posTotal += num[i];
        }
    }

    printf("%d valores positivos\n%.1f\n", posCount, posTotal / posCount);

    return 0;
}