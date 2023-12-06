#include <stdio.h>
 
int main() {
    double r;

    scanf("%lf", &r);

    printf("VOLUME = %.3f\n", (4.0/3.0) * 3.14159 * (r * r * r));
 
    return 0;
}