#include <stdio.h>

int main()
{
    int parentheses;
    char phrase[1001];
    char *phrasePtr;
    
    while(scanf("%s", phrase) != EOF){
        parentheses = 0;
        phrasePtr = phrase;
        
        while (*phrasePtr != '\0' && parentheses >= 0){
            
            if (*phrasePtr == '('){
                parentheses++;
            } else if (*phrasePtr == ')'){
                parentheses--;
            }
            
            phrasePtr++;
        }
        
        if (parentheses == 0){
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }
    
    return 0;
}