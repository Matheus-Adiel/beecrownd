#include <stdio.h>

int main()
{
    int credential, workPeriod;
    float salary;
    
    scanf("%d", &credential);
    scanf("%d", &workPeriod);
    scanf("%f", &salary);
    
    printf("NUMBER = %d\n", credential);
    printf("SALARY = U$ %.2f\n", workPeriod*salary);

    return 0;
}