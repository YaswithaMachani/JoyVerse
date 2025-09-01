//sorting

//selction sort
/*
#include <stdio.h>
#include <stdlib.h>
int i,j,midindex;
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        midindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[midindex]){
                midindex=j;
            }
        }
        int temp=arr[midindex];
        arr[midindex]=arr[i];
        arr[i]=temp;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int size;
    printf("enter the size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size-1;i++){
        scanf("%d ",&arr[i]);
    }
    selectionsort(arr,size);
    printArray(arr,size);
}*/

//insertion sort

/*
#include <stdio.h>
#include <stdlib.h>

void inseertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int size;
    printf("enter the size ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size-1;i++){
        scanf("%d ",&arr[i]);
    }
    inseertionsort(arr,size);
    printArray(arr,size);
    return 0;
}
*/
