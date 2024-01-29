#include <stdio.h>
#include <stdlib.h>

//definindo estrutura de pilha e suas principais funções
typedef struct stackNode
{
    int value;
    struct stackNode* next;
}stackNode;

typedef struct stack
{
    stackNode* top;
}stack;

stack* start_stack ();
void push (int value, stack* s);
int pop (stack* s);
void clear_stack (stack* s);
void print_stack (stack* s);

//fuções específicas para essa questão
stackNode* last_node (stack* s);
void fill_stack (int value, stack* s);
void turn_top_into_base (stack* s);

int main(){
    stack* STACK = start_stack();
    int tests;

    scanf("%d", &tests);
    while (tests > 0){
        fill_stack(tests, STACK);
        printf("Discarded cards:");
        for (int i = 0; i < tests - 2; i++){
            printf(" %d,", pop(STACK));
            turn_top_into_base(STACK);
        }
        printf(" %d\n", pop(STACK));
        printf("Remaining card: %d\n", STACK -> top ->value);
        clear_stack(STACK);
        scanf("%d", &tests);
    }

    return 0;
}

stack* start_stack (){
    stack* aux = (stack*) malloc(sizeof(stack));
    if (aux != NULL){
        aux -> top = NULL;
    }
    return aux;
}
void push (int value, stack* s){
    stackNode* aux = (stackNode*) malloc(sizeof(stackNode));
    if (aux != NULL){
        aux -> value = value;
        aux -> next = NULL;
        if (s -> top == NULL){
            s -> top = aux;
        } else {
            aux -> next = s -> top;
            s -> top = aux;
        }
    }
}
int pop (stack* s){
    int backupValue;
    stackNode* aux = s -> top;
    if (aux != NULL){
        backupValue = aux -> value;
        s -> top = aux -> next;
        aux -> next = NULL;
        free(aux);
    }
    return backupValue;
}
void clear_stack (stack*s){
    if (s -> top != NULL){
        pop(s);
        clear_stack(s);
    }
}
void print_stack (stack* s){
    stackNode* aux = s -> top;
    while (aux != NULL){
        printf("%d\n", aux -> value);
        printf("passei aqui\n");
        aux = aux -> next;
    }
}
void fill_stack (int value, stack* s){
    if (value > 0){
        push(value, s);
        fill_stack(value - 1, s);
    }
}
stackNode* last_node (stack* s){
    stackNode* aux = s -> top;
    if (aux != NULL){
        while (aux -> next != NULL){
            aux = aux -> next;
        }
        return aux;
    }
}
void turn_top_into_base (stack* s){
    stackNode* aux = s -> top;
    stackNode* aux2 = NULL;
    if (aux -> next != NULL){
        s -> top = aux -> next;
        aux -> next = NULL;
        aux2 = last_node(s);
        aux2 -> next = aux;
    }
}
