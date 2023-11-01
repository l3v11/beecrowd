#include <stdio.h>
#include <stdlib.h>

int main() {

    double score, sum=0;
    int valid_count=0, opt;

    while (1) {

        if (valid_count == 2) {
            printf("media = %.2lf\n", sum / 2);

            do {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &opt);
            } while (opt!=1 && opt!=2);

            if (opt == 1) {
                valid_count = 0;
                sum = 0;
                continue;
            } else if (opt == 2) {
                break;
            }
        }

        scanf("%lf", &score);

        if (score>=0 && score<=10) {
            valid_count++;
            sum += score;
        } else {
            printf("nota invalida\n");
        }
    }

    return 0;
}