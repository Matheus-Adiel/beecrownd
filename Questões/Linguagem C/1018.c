#include <stdio.h>
 
int main() {
    int value, initialValue;
    int banknotes[7];
    // {R$100, R$50, R$20, R$10, R$5, R$2, R$1}
    
    for (int i = 0; i < 7; i++){
        banknotes[i] = 0;
    }

    scanf("%d", &initialValue);
    value = initialValue;

    while (value >= 100){
        value -= 100;
        banknotes[0] += 1;
    }
    while (value >= 50){
        value -= 50;
        banknotes[1] += 1;
    }
    while (value >= 20){
        value -= 20;
        banknotes[2] += 1;
    }
    while (value >= 10){
        value -= 10;
        banknotes[3] += 1;
    }
    while (value >= 5){
        value -= 5;
        banknotes[4] += 1;
    }
    while (value >= 2){
        value -= 2;
        banknotes[5] += 1;
    }
    while (value >= 1){
        value -= 1;
        banknotes[6] += 1;
    }

    printf("%d\n", initialValue);
    printf("%d nota(s) de R$ 100,00\n", banknotes[0]);
    printf("%d nota(s) de R$ 50,00\n", banknotes[1]);
    printf("%d nota(s) de R$ 20,00\n", banknotes[2]);
    printf("%d nota(s) de R$ 10,00\n", banknotes[3]);
    printf("%d nota(s) de R$ 5,00\n", banknotes[4]);
    printf("%d nota(s) de R$ 2,00\n", banknotes[5]);
    printf("%d nota(s) de R$ 1,00\n", banknotes[6]);

    return 0;
}