#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow!\n");
        return;
    }
    s->data[++s->top] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return s->data[s->top--];
}

void moveTop(Stack *src, Stack *dest) {
    if (!isEmpty(src)) {
        int value = pop(src);
        push(dest, value);
    } else {
        printf("Source stack is empty!\n");
    }
}

void printStack(Stack *s) {
    for (int i = s->top; i >= 0; i--)
        printf("%d ", s->data[i]);
    printf("\n");
}

int main() {
    Stack src, dest;
    init(&src);
    init(&dest);

    push(&src, 10);
    push(&src, 20);
    push(&src, 30);

    printf("Source Stack before move: ");
    printStack(&src);

    moveTop(&src, &dest);

    printf("Source Stack after move: ");
    printStack(&src);
    printf("Destination Stack: ");
    printStack(&dest);

    return 0;
}
