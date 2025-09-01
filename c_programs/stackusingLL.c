#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void push(struct node**top,int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(!newnode){
        printf("heap overloaded\n");
    }
    newnode->data=value;
    newnode->next=*top;
    *top=newnode;
    printf("%d pushed into stack\n",value);
}
void pop(struct node** top){
    if(*top==NULL){
        printf("stack is underflow\n");
    }
    struct node* temp=*top;
    int popped_value=temp->data;
    *top=temp->next;
    free(temp);
    printf("%d\n",popped_value);
    
}
void peek(struct node*top){
    if(top==NULL){
        printf("stack is empty\n");
    }
    printf("%d",top->data);
}
void isEmpty(struct node*top){
    if(top==NULL){
        printf("empty stack\n");
    }
    else{
        printf("not empty\n");
    }
}
void display(struct node* top){
  if(top==NULL){
    printf("stack is empty\n");
    return;
  }
  struct node*temp=top;
  printf("Stack elements are \n");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}

int main()
{
    struct node* stack=NULL;
    push(&stack,10);
    push(&stack,30);
    push(&stack,40);
    push(&stack,60);
    display(stack);
    pop(&stack);
    display(stack);
    return 0;
}