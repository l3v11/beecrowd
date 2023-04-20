#include <stdio.h>
#include <stdlib.h>

int main() {

    for (float i=0; i<=2.2; i+=0.2) {
        for (float j=1; j<=3; j++) {
            if ((int)(i*10) % 10 == 0) {
                printf("I=%d J=%d\n", (int)i, (int)(j+i));
            } else {
                printf("I=%.1f J=%.1f\n", i, j+i);
            }
        }
    }

    return 0;
}