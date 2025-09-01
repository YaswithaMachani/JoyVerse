#include <stdio.h>
#include <stdlib.h>

#define size 7
int arr[size];
void init(){
    int i;
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }
}
void insert(int val){
    int key=val%size;
    if(arr[key]==-1){
        arr[key]=val;
        printf("%d is inserted at array[%d]\n",val,key);
    }
    else{
        printf("Collision:arr[%d] has element %d already!\n",key,arr[key]);
        printf("Unable to insert %d\n",val);
    }
}
void del(int val){
    int key=val%size;
    if(arr[key]==val){
        arr[key]=-1;
    }
    else{
        printf("%d is not present in hashtable\n",val);
    }
}

void search(int val){
    int key=val%size;
    if(arr[key]==val){
        printf("Search found\n");
    }
    else{
        printf("Search not found");
    }
}
void print(){
    int i;
    for(int i=0;i<size;i++){
        printf("array[%d]=%d\n",arr[i]);
    }
}

int main(){
    init();
    insert(10);
    insert(2);
    insert(4);
    insert(3);
    printf("hashtable\n");
    print();
    
}