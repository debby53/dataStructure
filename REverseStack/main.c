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

void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
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

void reverse(Stack *s) {
    if (isEmpty(s))
        return;

    int temp = pop(s);
    reverse(s);

    Stack tempStack;
    init(&tempStack);

    while (!isEmpty(s)) {
        push(&tempStack, pop(s));
    }

    push(s, temp);

    while (!isEmpty(&tempStack)) {
        push(s, pop(&tempStack));
    }
}

void printStack(Stack *s) {
    for (int i = s->top; i >= 0; i--)
        printf("%d ", s->data[i]);
    printf("\n");
}

int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    printf("Original Stack: ");
    printStack(&s);

    reverse(&s);

    printf("Reversed Stack: ");
    printStack(&s);

    return 0;
}
