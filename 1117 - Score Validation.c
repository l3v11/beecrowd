#include <stdio.h>
#include <stdlib.h>

int main() {

    float score, sum=0;
    int valid_count=0;

    while (1) {

        if (valid_count == 2) {
            break;
        }

        scanf("%f", &score);

        if (score>=0 && score<=10) {
            valid_count++;
            sum += score;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", sum / 2);

    return 0;
}