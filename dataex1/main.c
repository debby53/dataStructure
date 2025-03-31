#include <stdio.h>
#define MAX 5  // Define the maximum size of the stack

// Stack structure
typedef struct {
    int arr[MAX]; // Array to hold stack elements
    int top;      // Index of the top element
} Stack;

// Function to initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->arr[++(s->top)] = value;
    printf("Pushed: %d\n", value);
}

// Function to print the top element of the stack
void printTop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d\n", s->arr[s->top]);
    }
}

// Main function to test the stack
int main() {
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printTop(&s); // Should print 30

    push(&s, 40);
    push(&s, 50);
    push(&s, 60); // This should cause "Stack Overflow!"

    printTop(&s); // Should still print 50 (last valid push)

    return 0;
}
