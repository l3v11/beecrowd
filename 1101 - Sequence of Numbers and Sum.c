#include <stdio.h>
#include <stdlib.h>

int main() {

    int m, n, tmp, sum;

    while (1) {
        scanf("%d %d", &m, &n);

        if (m<=0 || n<=0) {
            break;
        }

        if (m>n) {
            tmp = m;
            m = n;
            n = tmp;
        }

        sum=0;
        for (int i=m; i<=n; i++) {
            sum += i;
            printf("%d ", i);
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}