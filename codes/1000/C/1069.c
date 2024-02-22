#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {
    char characte;
    struct stackNode *next;
} stackNode;

typedef struct stack {
    stackNode *top;
} stack;

stack* start_stack();
void push(char c, stack *s);
void pop(stack *s);
void cleam_stack(stack *s);
int is_cleam(stack *s);

int main()
{
    char mine[1001];
    char *minePtr;
    int tests, diamonds;
    stack *STACK = start_stack();
    
    scanf("%d", &tests);
    
    for (int i = 0; i < tests; i++){
        diamonds = 0;
        scanf("%s", mine);
        minePtr = mine;
        
        while (*minePtr != '\0'){
            if (*minePtr == '<'){
                push('<', STACK);
            } else if (*minePtr == '>'){
                if (!is_cleam(STACK)){
                    diamonds++;
                    pop(STACK);
                }
            }
            
            minePtr++;
        }
        
        printf("%d\n", diamonds);
        cleam_stack(STACK);
    }

    return 0;
}

stack* start_stack(){
    stack *s = (stack*) malloc(sizeof(stack));
    if (s != NULL){
        return s;
    }
}

void push(char c, stack *s){
    stackNode *aux = (stackNode*) malloc(sizeof(stackNode));
    if (aux != NULL){
        aux -> characte = c;
        aux -> next = s -> top;
        s -> top = aux;
    }
}

void pop(stack *s){
    stackNode *aux = s -> top;
    if (aux != NULL){
        s -> top = aux -> next;
        aux -> next = NULL;
        free(aux);
    }
}

void cleam_stack(stack *s){
    if (s -> top != NULL){
        pop(s);
        cleam_stack(s);
    }
}

int is_cleam(stack *s){
    return s -> top == NULL;
}