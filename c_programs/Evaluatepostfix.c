#include <stdio.h>
#include <string.h>
#include<math.h>
#include<ctype.h>
# define max 10
int stack[max],top=-1;
void push(int num){
    if (top==max-1){
        printf("stack is full");
    }
    stack[++top]=num;
}
int pop(){
    if(top==-1){
        printf("stack is empty");
        return -1;
    }
    top--;
    return stack[top];
}
int evaluatepostfix(char *postfix){
    int i=0;
    int o1,o2;
    char ch;
    while((ch=postfix[i++])!='\0'){
        if(isdigit(ch)){
            push(ch-'0');
        }
        else{
            o2=pop();
            o1=pop();
            switch (ch)
            {
            case '+' :
                push(o1+o2);
                break;
            case '-' :
                push(o1-o2);
                break;
            case '*' :
                push(o1*o2);
                break;
            case '/' :
                if(o2==0){
                    printf("zero division error");
                }
                push(o1/o2);
                break;
            case '^':
                push((int)pow(o1,o2));
                break;
            default:
                printf("invalied opertor");
            }
        }
    }
    return pop();
}
int main(){
    char postfix[max];
    int res;
    printf("Enter any post fix expression");
    scanf("%s",&postfix);
    res=evaluatepostfix(postfix);
    printf("%d",res);
    return 0;
}