#include <stdio.h>
 
int main() {
 
    float x, y, z, avg;
    
    scanf("%f\n%f\n%f", &x, &y, &z);

    avg = (x*2 + y*3 + z*5) / (2 + 3 + 5);

    printf("MEDIA = %.1f\n", avg); 

    return 0;
}