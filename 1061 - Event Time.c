#include <stdio.h>

int main() {

    int d1, h1, m1, s1, d2, h2, m2, s2;

    scanf("Dia %d\n%d : %d : %d\n", &d1, &h1, &m1, &s1);
    scanf("Dia %d\n%d : %d : %d", &d2, &h2, &m2, &s2);

    int duration = ((d2-d1) * 86400) + ((h2-h1) * 3600) + ((m2-m1) * 60) + (s2-s1);

    int day = duration / 86400;
    int hr = (duration % 86400) / 3600;
    int min = (duration % 3600) / 60;
    int sec = duration % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hr, min, sec);

    return 0;
}