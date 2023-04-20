#include <stdio.h>

int main() {

    int n, num[10000];

    scanf("%d", &n);

    for (int i=0; i<n; i++) {

        scanf("%d", &num[i]);

        if (num[i]%2!=0 && num[i]>0) {
            printf("ODD POSITIVE\n");
        } else if (num[i]%2!=0 && num[i]<0) {
            printf("ODD NEGATIVE\n");
        } else if (num[i]%2==0 && num[i]>0) {
            printf("EVEN POSITIVE\n");
        } else if (num[i]%2==0 && num[i]<0) {
            printf("EVEN NEGATIVE\n");
        } else if (num[i] == 0) {
            printf("NULL\n");
        }
    }

    return 0;
}