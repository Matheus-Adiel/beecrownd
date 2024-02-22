#include <stdio.h>
#include <math.h>
 
int main() {
    double n = 3.14159;
    double raio = 0.0;
    double area = 0.0;
    
    scanf("%lf", &raio);
    area = pow(raio, 2)*n;
    
    printf("A=%.4lf\n", area);
    
    return 0;
}