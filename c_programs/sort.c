/*#include<stdio.h>
void main()
{
    int a[100],n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}*/
/*#include <stdio.h>
#define max 100
int main(){
    int arr[max],i,j,num;
    printf("Enter the total numbers:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",arr[i]);
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
             if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            } 
        }
    }
    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}*/
//linear search
/*#include <stdio.h>
#define max 100
int main(){
    int a[max],i,key,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int found=0;
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            found=1;
            break;
        }
    }
    if(a[i]==key){
        printf("%d element is found in %d index",a[i],key);
    }
}*/
