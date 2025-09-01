#include <stdio.h>
#define max 20
int main(){
    int a[max],i,size,pos,num;
    scanf("%d\n",&size);
    for(i=0;i<size;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d\n",&pos);
    scanf("%d\n",&num);
    if(pos >size+1 || pos <=0){
        printf("Invalied position");
    }
    else{
        for(i=size;i>=pos;i--){
            a[i]==a[i-1];
        }
        a[pos-1]=num;
        size++;
    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}