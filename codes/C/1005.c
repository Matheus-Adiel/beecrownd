#include <stdio.h>
 
int main() {
    double notaA = 0.0;
    double notaB = 0.0;
    double media = 0.0;
    
    scanf("%lf",&notaA);
    scanf("%lf",&notaB);
    
    media = (notaA*3.5 + notaB*7.5)/11;
    
    printf("MEDIA = %.5lf\n", media);
    
    return 0;
}
