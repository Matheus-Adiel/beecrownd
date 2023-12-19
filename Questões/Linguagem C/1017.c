#include <stdio.h>
 
int main() {
    int hours, distance;

    scanf("%d", &hours);
    scanf("%d", &distance);

    printf("%.3f\n", (float) hours*distance/12);

    return 0;
}