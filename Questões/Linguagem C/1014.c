#include <stdio.h>
 
int main() {
    float distance, consumption;

    scanf("%f %f", &distance, &consumption);
    printf("%.3f km/l\n", distance/consumption);
 
    return 0;
}