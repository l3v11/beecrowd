#include <stdio.h>

int main() {

    int n;
    float n1, n2, n3, avg=0;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%f %f %f", &n1, &n2, &n3);

        avg = (n1*2 + n2*3 + n3*5) / (2 + 3 + 5);

        printf("%.1f\n", avg);
    }

    return 0;
}