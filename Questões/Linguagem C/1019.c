#include <stdio.h>
 
int main() {
    int seconds, minutes, hours;

    minutes = 0;
    hours = 0;
    
    scanf("%d", &seconds);

    while (seconds >= 60){
        seconds -= 60;
        minutes++;
    }
    while (minutes >= 60){
        minutes -= 60;
        hours++;
    }

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}