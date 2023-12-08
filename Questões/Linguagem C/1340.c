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
void print_stack(stack *s);
void clear_stack(stack *s);

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
void print_queue(queue *q);
void clear_queue(queue *q);

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
void print_priority_queue(priorityQueue *pq);
void clear_priority_queue(priorityQueue *pq);

int main()
{
    int tests, command, value;
    int isStack, isQueue, isPriorityQueue;
    stack *STACK = start_stack();
    queue *QUEUE = start_queue();
    priorityQueue *PRIORITYQUEUE = start_priority_queue();
    
    while (scanf("%d", &tests) != EOF){
        isStack = 1; isQueue = 1; isPriorityQueue = 1;
        while(tests){
            scanf("%d %d", &command, &value);
            if (command == 1){
                if (isStack){
                    push(value, STACK);
                }
                if (isQueue){
                    add_queue_node(value, QUEUE);
                }
                if (isPriorityQueue){
                    add_priority_queue_node(value, PRIORITYQUEUE);
                }
            } else {
                if (value != pop(STACK)){
                    isStack = 0;
                    clear_stack(STACK);
                }
                if (value != delete_queue_node(QUEUE)){
                    isQueue = 0;
                    clear_queue(QUEUE);
                }
                if (value != delete_priority_queue_node(PRIORITYQUEUE)){
                    isPriorityQueue = 0;
                    clear_priority_queue(PRIORITYQUEUE);
                }
            }
            tests--;
        }
        if ((isStack + isQueue + isPriorityQueue) >= 1){
            if (isStack + isQueue + isPriorityQueue >= 2){
                printf("not sure\n");
            } else {
                if (isStack){
                    printf("stack\n");
                } else if (isQueue) {
                    printf("queue\n");
                } else {
                    printf("priority queue\n");
                }
            }
        } else {
            printf("impossible\n");
        }
        clear_stack(STACK);
        clear_queue(QUEUE);
        clear_priority_queue(PRIORITYQUEUE);
    }
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

void print_stack(stack *s){
    stackNode *aux = s -> top;
    if (aux != NULL){
        printf("Sua pilha: \n");
        while (aux != NULL){
            printf ("%d\n", aux -> value);
            aux = aux -> next;
        }
        printf("\n");
    } else {
        printf("Sua pilha está vazia . . . \n");
    }
}

void clear_stack(stack *s){
    stack *aux = s;
    if (aux -> top != NULL){
        pop(aux);
        clear_stack(aux);
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

void print_queue(queue *q){
    queueNode *aux = q -> first;
    if (aux != NULL){
        printf("Sua fila: ");
        while (aux != NULL){
            printf ("%d ", aux -> value);
            aux = aux -> next;
        }
        printf("\n\n");
    } else {
        printf("Sua fila está vazia . . . \n");
    }
}

void clear_queue(queue *q){
    queue *aux = q;
    if (aux -> first != NULL){
        delete_queue_node(aux);
        clear_queue(aux);
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
            //value = max -> value;
            //free (max);
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
                //value = max -> value;
                //free(max);
            } else {
                aux = pq -> first;
                while ((aux -> next -> value) != (max -> value)){
                    aux = aux -> next;
                }
                aux -> next = max -> next;
                max -> next = NULL;
                //value = max -> value;
                //free(max);
            }
        }
        value = max -> value;
        free(max);
        return value;
    }
}

void print_priority_queue(priorityQueue *pq){
    priorityQueueNode *aux = pq -> first;
    if (aux != NULL){
        printf("Sua fila com prioridade: ");
        while (aux != NULL){
            printf ("%d ", aux -> value);
            aux = aux -> next;
        }
        printf("\n\n");
    } else {
        printf("Sua fila com prioridade está vazia . . . \n");
    }
}

void clear_priority_queue(priorityQueue *pq){
    priorityQueue *aux = pq;
    if (aux -> first != NULL){
        delete_priority_queue_node(aux);
        clear_priority_queue(aux);
    }
}