#include <stdio.h>
#include <stdlib.h>

int main() {

    int t;

    while (1) {
        scanf("%d", &t);

        if (t == 2002) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}