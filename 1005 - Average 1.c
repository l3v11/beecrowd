#include <stdio.h>
 
int main() {
 
    float x, y, avg;
    
    scanf("%f\n%f", &x, &y);

    avg = (x*3.5 + y*7.5) / (3.5 + 7.5);

    printf("MEDIA = %.5f\n", avg); 

    return 0;
}