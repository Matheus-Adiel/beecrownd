#include <stdio.h>
 
int main() {
 
    int days, months, years;
    months = 0;
    years = 0;

    scanf("%d", &days);

    while (days >= 365){
        days -= 365;
        years++;
    }
    while (days >= 30){
        days -= 30;
        months++;
    }

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
 
    return 0;
}