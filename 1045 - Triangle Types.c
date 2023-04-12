#include <stdio.h>
#include <math.h>

int main() {

    double arr[3], tmp;
    int i, j;

    for (i=0; i<3; i++) {
        scanf("%lf", &arr[i]);
    }

    for (i=0; i<3; i++) {
        for (j=i+1; j<3; j++) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    if ( arr[0] >= (arr[1] + arr[2]) ) {
        printf("NAO FORMA TRIANGULO\n");
    } else if ( (arr[0]*arr[0]) == ( (arr[1]*arr[1]) + (arr[2]*arr[2]) ) ) {
        printf("TRIANGULO RETANGULO\n");
    } else if ( (arr[0]*arr[0]) > ( (arr[1]*arr[1]) + (arr[2]*arr[2]) ) ) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if ( (arr[0]*arr[0]) < ( (arr[1]*arr[1]) + (arr[2]*arr[2]) ) ) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if ( arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0] ) {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ( (arr[0] == arr[1] && arr[0] != arr[2]) || (arr[1] == arr[2] && arr[1] != arr[0]) || (arr[2] == arr[0] && arr[2] != arr[0])) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
