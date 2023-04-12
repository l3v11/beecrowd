#include <stdio.h>

int main() {

    int time, speed;

    scanf("%d\n%d", &time, &speed);

    float liters = ((float)speed / 12) * (float)time;

    printf("%.3f\n", liters);

    return 0;
}