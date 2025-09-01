
/*program to print all natural numbers from 1 to n
#include <stdio.h>
void main(){
    int i=1,n;
    scanf("%d",n);
    while(i<=n){
        printf("%d",i);
        i++;
    }
}*/
/*print even numbers from 1 to n
#include <stdio.h>
void main(){
    int i,n,even;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d",i);
        }
    }
}
*/
/*print sum from 1 to n
#include <stdio.h>
void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
*/
/*Multiplication table
#include <stdio.h>
void main(){
    int n,i=15,mul;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        mul=i*n;
        printf("%d X %d = %d",i,n,mul);
    }
}
*/
//count no of digits in a number
/*#include <stdio.h>
void main(){
    long long num;
    int count=0;
    scanf("%lld",&num);
    while(num!=0){
        num/=10;
        count++;
    }
    printf("%d",count);
}*/
/*
#include <stdio.h>
void main(){
    int reverse=0;
    long long num;
    scanf("%lld",&num);
    while(num!=0){
        reverse=(reverse*10)+(num%10);
        num/=10;
    }
    printf(" reverse: %d",reverse);
}   
*/
/*
#include <stdio.h>
void main(){
    int n,f=1;
    scanf("%d",&n);
    while(n>0){
        fact=fact*n;
        n--;
    }
    printf("%d",fact);
}
*/
/*#include <stdio.h>
#define max 100
void main(){
    int a[max],i,n,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
          scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}*/
/*#include <stdio.h>
void main(){
    int rev=0,num,r;
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        rev=rev*10+(r*r*r);
        num=num/10;
    }
    if(num==rev){
        printf("Amstrong number");
    }
    else{
        printf("not amstrong number");
    }

}*/
/*#include <stdio.h>
void main(){
    int rev=0,temp=0,num,r;
    scanf("%d",num);
    temp==num;
    while(num>0){
        r=num%10;
        rev=rev*10+r*r*r;
        num=num/10;
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
}*/
/*#include <stdio.h>
void main(){
    int temp=0,rev=0,n,r;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    r=n*10;
    rev=rev*10+r;
    n=n/10;
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}*/
/*#include <stdio.h>
int fibo(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
int fibo(int n){
    if(n>=0){
        return fibo(n-1)+fibo(n-2);
    }
    else{
        return 1;
    }
}*/
//EXAM PROGRAMS
/*#include <stdio.h>
#define max 100
#define maxm 100
int main(){
    int i,j;
    int a[max];
    int b[maxm];
    int c[];
    int n;
    scanf("Enter the size of an array:")
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
         scanf("%d",&b[i]);
        }
    }
    for(i=0;i<n;i++){
        for(i=0;i<n;i++){

        }
    }
    


}*/







