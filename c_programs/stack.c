#include <stdio.h>
#include <stdlib.h>
#define Max_size 10
int stack[Max_size],top=-1;
void push(int item){
    if (top==Max_size){
        printf("Stack overflow");
    }
    else{
        stack[++top]=item;
    }
}
int pop(){
    if (top==-1){
        printf("Stack underflow");
    }
    else{
        return stack[top--];
    }
}
int peek(){
    if (top==-1){
        printf("Stack is empty");
    }
    else{
        return stack[top];
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        for (i=top;i>-1;i--){
            printf("%d",stack[i]);
        }
    }
}
int main(){
    int ch,data;
    do{
        printf("Stack Opertion");
        printf("push\npop\npeek\ntop\ndisplay\nexit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter data to push");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                printf("popped:%d\n",pop());
                break;
            case 3:
                printf("Top element:%d\n",peek());
                break;
            case 4:
                display();
            default:
                printf("Enter valied data");
        }
    }while(ch!=5);
    return 0;
}