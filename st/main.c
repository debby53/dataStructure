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
    printf("elements in the stack\n");
    for(int i=0; i<max; i++){
        printf("%d",stack_arr[i]);
    }
    }





int main()
{
    push(1);
    push(2);
    push(3);
    display();
}
