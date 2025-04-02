#include <stdio.h>
#include <stdlib.h>
#define max 5
 struct stack{
 int items[max];
 int top;

 };

 void initstack(struct stack *s){
 s->top=-1;
 }

 int isFull(struct stack *s){
 return s->top==max-1;
 }

 int isEmpty(struct stack *s){
 return s->top==-1;
 }

 void push(struct stack *s,int values){
     if(isFull(s)){
        printf("stack over flow");
     }
     s->items[++(s->top)]=values;
      printf("%d pushed to stack\n", values);


 }

 int pop(struct stack *s){
 if(isEmpty(s)){
    printf("stack underflow");
    return -1;
 }else{
 int values=s->items[(s->top)];
 s->top--;
 return values;
 }
 }

  int peek(struct stack *s){
 if(isEmpty(s)){
    printf("stack underflow");
    return -1;
 }else{
  return  s->items[s->top];

 }
 }





int main()
{
    struct stack s;
    initstack(&s);
    push(&s,10);
    push(&s,20);
    push(&s, 30);
    printf("the top element is %d\n",peek(&s));
    printf("popped element is %d\n",pop(&s));
    printf("Popped element: %d\n", pop(&s));

    if(isEmpty(&s)){
        printf("stack is empty\n");
    }else{
         printf("Stack is not empty\n");

}
return 0;
}
