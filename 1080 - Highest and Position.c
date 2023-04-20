#include <stdio.h>

int main() {

    int arr[100], j=0, pos=0;

    for (int i=0; i<100; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > j) {
            j = arr[i];
            pos = i+1;
        }
    }

    printf("%d\n%d\n", j, pos);

    return 0;
}