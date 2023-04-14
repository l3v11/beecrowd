#include <stdio.h>

int main() {

    float salary, money_earned, n_salary;
    int re_ad;

    scanf("%f", &salary);

    if (salary >= 0 && salary <= 400.00) {
        re_ad = 15;
        money_earned = salary * ( (float) re_ad / 100 );
        n_salary = salary + money_earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n"
            "Em percentual: %d %%\n", n_salary, money_earned, re_ad);
    } else if (salary >= 400.01 && salary <= 800.00) {
        re_ad = 12;
        money_earned = salary * ( (float) re_ad / 100 );
        n_salary = salary + money_earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n"
            "Em percentual: %d %%\n", n_salary, money_earned, re_ad);
    } else if (salary >= 800.01 && salary <= 1200.00) {
        re_ad = 10;
        money_earned = salary * ( (float) re_ad / 100 );
        n_salary = salary + money_earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n"
            "Em percentual: %d %%\n", n_salary, money_earned, re_ad);
    } else if (salary >= 1200.01 && salary <= 2000.00) {
        re_ad = 7;
        money_earned = salary * ( (float) re_ad / 100 );
        n_salary = salary + money_earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n"
            "Em percentual: %d %%\n", n_salary, money_earned, re_ad);
    } else if (salary >= 2000.00) {
        re_ad = 4;
        money_earned = salary * ( (float) re_ad / 100 );
        n_salary = salary + money_earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n"
            "Em percentual: %d %%\n", n_salary, money_earned, re_ad);
    }

    return 0;
}