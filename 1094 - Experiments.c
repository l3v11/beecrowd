#include <stdio.h>

int main() {

    int t, n;
    float rabbit=0, rat=0, frog=0;
    char anim;

    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        scanf("%d %c", &n, &anim);

        if (anim == 'C') {
            rabbit += n;
        } else if (anim == 'R') {
            rat += n;
        } else if (anim == 'S') {
            frog += n;
        }
    }

    float total = rabbit + rat + frog;

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", rabbit);
    printf("Total de ratos: %.0f\n", rat);
    printf("Total de sapos: %.0f\n", frog);
    printf("Percentual de coelhos: %.2f %%\n", (rabbit/total) * 100);
    printf("Percentual de ratos: %.2f %%\n", (rat/total) * 100);
    printf("Percentual de sapos: %.2f %%\n", (frog/total) * 100);

    return 0;
}