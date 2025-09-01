/*#include <stdio.h>
int add(int a,int b);
int main(){
    int a=10,b=5;
    int result=add(a,b);
    printf("Sum is %d",result);
    return 0;
}
int add(int x,int y){
    int result=x+y;
    return result;
}*/
/*#include <stdio.h>
int add(int,int);
int sub(int,int);
int multiply(int,int);
int division(int,int);
int main(){
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("sum=%d\n",sum);
    int diff=sub(a,b);
    printf("Difference=%d\n",diff);
    int mul=multiply(a,b);
    printf("multiplication=%d\n",mul);
     int div=division(a,b);
    printf("Division=%d\n",div);
    return 0;
}
int add(int x,int y){
    int sum=x+y;
    return sum;
}
int sub(int x,int y){
    int diff=x-y;
    return diff;
}
int multiply(int x,int y){
    int mul=x*y;
    return mul;
}
int division(int x,int y){
    int div=x/y;
    return div;
}*/
//RECURSION
/*#include <stdio.h>
int hcf(int,int);
int main(){
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    int res=hcf(n1,n2);
    printf("Hcf of %d and %d is %d",n1,n2,res);
    return 0;
}
int hcf(int x,int y){
    if(y!=0){
        return hcf(y,x%y);
    }
}*/



/*
#include <stdio.h>
void addptr(int ,int );
int main(){
    int addpointer(int *a,int *b);
    addpointer=addptr;
    int result=addptr(3,5);
    printf("result=%d",result);
    return 0;
}
void addptr(int a,int b ){
int result=(a+b);
return result;
}*/

#include <stdio.h>
int even(int n){
    if(n%2==0){
        return n-1;
        n++;
    }
}
int odd(int n){
    if(n%2!=0){
        return n+1;
        n++;
    }
}
int main(){
    int s,e;
    int n;
    printf("Enter the range:");
    scanf("%d %d",&s,&e);
    for(int i=s;i<e;i++){
        int i=n;
        if(i%2==0){
            int res=even(n);
            printf("%d ",res );
        }
        else{
            printf("%d ",odd(n));
        }
    }
    return 0;
}



