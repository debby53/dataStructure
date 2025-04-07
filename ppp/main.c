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

int pop(){
    int value;
    if(top==-1){
        printf("stack underflow ");
        return 1;
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}
void display(){
for(int i=0; i<=top; i++){
    printf("the remaining value is %d\n",stack_arr[i]);
}
}

int main()
{
   push(1);
   push(2);
   push(3);
   pop();
   display();
}
