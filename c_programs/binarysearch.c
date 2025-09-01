#include <stdio.h>
int binarysearch(int arr[],int left,int right,int value){
    while(left<=right){
        int mid=left+(right-left/2);
        if(arr[mid]==value){
            return mid;
        }
        if(arr[mid]>value){
            return right=mid-1;
        }
        else{
            left=mid-1;
        }
    }
    return -1;
}
int main(){
    int size,key;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    printf("enter the key");
    scanf("%d",&key);
    printf("enter elements in array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int res=binarysearch(arr,0,size-1,key);
    if(res!=-1){
        printf("Element found at index%d",res);
    }
    else{
        printf("element not found");
    }
}

//space complexity o(1)
//time complexity o(log n)