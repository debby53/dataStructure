#include <stdio.h>
#include <stdlib.h>
#define max 5

int stack_arr[max];
int top=-1;

void push(int data){
    if(top==max-1){
        printf("stack overflow");
        return;
    }
    top=top+1;
    stack_arr[top]=data;

}

void display(){
printf("the remaining elements");
  if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Remaining elements in the stack:\n");
    for (int i = 0; i <= top; i++) {  // Iterate only up to 'top'
        printf("%d ", stack_arr[i]);
    }
    printf("\n");  // Newline for better formatting
}



int pop(){
    int data;
    if(top==-1){
        printf("stack underflow\n");
        return 1;
    }
    data=stack_arr[top];
    top=top-1;
    return 0;



}

int main()
{
    push(1);
    push(2);
    push(3);
    printf("Popped element: %d\n", pop());
    display();
}
