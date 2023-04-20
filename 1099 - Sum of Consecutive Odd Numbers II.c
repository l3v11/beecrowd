#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, x, y, tmp, sum;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);

        if (x>y) {
            tmp = x;
            x = y;
            y = tmp;
        }

        sum=0;
        for (int i=x+1; i<y; i++) {
            if (i%2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}