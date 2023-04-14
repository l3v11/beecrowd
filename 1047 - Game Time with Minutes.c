#include <stdio.h>

int main() {

    int ih, im, fh, fm, difr;

    scanf("%d %d %d %d", &ih, &im, &fh, &fm);

    difr = ( (fh*60) + fm) - ( (ih*60) + im );

    if (difr <= 0) {
        difr += 24*60;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", difr/60, difr%60);

    return 0;
}