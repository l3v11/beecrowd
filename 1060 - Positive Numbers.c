#include <stdio.h>

int main() {

    float num[6];
    int posCount=0;

    for (int i=0; i<6; i++) {
        scanf("%f", &num[i]);
        if (num[i] > 0) {
            posCount += 1;
        }
    }

    printf("%d valores positivos\n", posCount);

    return 0;
}