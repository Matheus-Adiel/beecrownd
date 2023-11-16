#include <stdio.h>
#include <stdlib.h>

//estrutura de pilha
typedef struct stackNode {
    int value;
    struct stackNode *next;
} stackNode;

typedef struct stack {
    stackNode *top;
} stack;

//funçoes de pilha
stack* start_stack();
void push(int value, stack *s);
int pop(stack *s);

//estrutura de fila
typedef struct queueNode {
    int value;
    struct queueNode *next;
} queueNode;

typedef struct queue {
    queueNode *first;
    queueNode *last;
} queue;

//funçoes de fila
queue* start_queue();
void add_queue_node(int value, queue *q);
int delete_queue_node(queue *q);

//estrutura de fila com prioridade
typedef struct priorityQueueNode {
    int value;
    struct priorityQueueNode *next;
} priorityQueueNode;

typedef struct priorityQueue{
    priorityQueueNode *first;
} priorityQueue;

//funcoes da fila com prioridade
priorityQueue* start_priority_queue();
void add_priority_queue_node(int value, priorityQueue *pq);
int delete_priority_queue_node(priorityQueue *pq);

int main()
{
    stack *STACK = start_stack();
    printf("Hello World");
    return 0;
}

// funçoes de pilha
stack* start_stack(){
    stack *s = (stack*) malloc(sizeof(stack));
    if (s != NULL){
        (*s).top = NULL;
    }
    return s;
}

void push(int value, stack *s){
    stackNode *aux = (stackNode*) malloc(sizeof(stackNode));
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

int pop(stack *s){
    stackNode *aux = s->top;
    int value;
    if (aux != NULL){
        value = aux -> value;
        s -> top = aux -> next;
        aux -> next = NULL;
        free(aux);
        return value;
    }
}

//funcoes de fila
queue* start_queue(){
    queue *aux = (queue*) malloc(sizeof(queue));
    if (aux != NULL){
        aux -> first = NULL;
        aux -> last = NULL;
    }
    return aux;
}

void add_queue_node(int value, queue *q){
    queueNode *newNode = (queueNode*) malloc(sizeof(queueNode));
    if (newNode != NULL){
        newNode -> value = value;
        newNode -> next = NULL;
        if (q -> first == NULL){
            q -> first = newNode;
        } else {
            q -> last -> next = newNode;
        }
        q -> last = newNode;
    }
}

int delete_queue_node(queue *q){
    queueNode *aux = q->first;
    int value;
    if (aux != NULL){
        q -> first = aux->next;
        aux -> next = NULL;
        value = aux -> value;
        if (q -> first == NULL){
            q -> last = NULL;
        }
        free(aux);
        return value;
    }
}

//funcoes da fila com prioridade
priorityQueue* start_priority_queue(){
    priorityQueue *aux = (priorityQueue*) malloc(sizeof(priorityQueue));
    if (aux != NULL){
        aux -> first = NULL;
        return aux;
    }
}

void add_priority_queue_node(int value, priorityQueue *pq){
    priorityQueueNode *newNode = (priorityQueueNode*) malloc(sizeof(priorityQueueNode));
    priorityQueueNode *aux;
    if (newNode != NULL){
        newNode -> value = value;
        newNode -> next = NULL;
        if (pq -> first == NULL){
            pq -> first = newNode;
        } else {
            aux = pq -> first;
            while (aux -> next != NULL){
                aux = aux -> next;
            }
            aux -> next = newNode;
        }
    }
}

int delete_priority_queue_node(priorityQueue *pq){
    if (pq -> first != NULL){
        priorityQueueNode *aux = pq -> first;
        priorityQueueNode *max = pq -> first;
        int value;
        if (max -> next == NULL){
            pq -> first = NULL;
            value = max -> value;
            free (max);
        } else {
            while (aux != NULL){
                if ((aux -> value) > (max -> value)) {
                    max = aux;
                }
                aux = aux -> next;
            }
            if (max == pq -> first){
                pq -> first = max -> next;
                max -> next = NULL;
                value = max -> value;
                free(max);
            } else {
                aux = pq -> first;
                while ((aux -> next -> value) != (max -> value)){
                    aux = aux -> next;
                }
                aux -> next = max -> next;
                max -> next = NULL;
                value = max -> value;
                free(max);
            }
        }
        //value = max -> value;
        //free(max);
        return value;
    }
}