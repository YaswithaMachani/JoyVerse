/*
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=data;
    return newnode;
}
void insertnode(struct node**head,int data){
    struct node* newnode=createnode(data);
    if(*head==NULL){
        *head=newnode;
        return;

    }
    struct node*temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(struct node*head){
    if(head==NULL){
        printf("Sll is empty");
    }
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}
int main(){
    struct node* head=NULL;
    int n;
    scanf("%d",&n);
    insertnode(&head,n);
    insertnode(&head,n);
    insertnode(&head,n);
    insertnode(&head,n);
    insertnode(&head,n);
    insertnode(&head,n);
    insertnode(&head,n);
    insertnode(&head,n);
    display(head);
    return 0;

}



#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node*prev;
};
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->data=data;
    return newnode;
}
struct node* insertnode(struct node*head,int data){
    struct node* newnode=createnode(data);
    if(head==NULL){
        return newnode;

    }
    struct node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}
void display(struct node*head){
    if(head==NULL){
        printf("Dll is empty");
    }
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    print("Null");
}
int main(){
    struct node* head=NULL;
    int n;
    scanf("%d",&n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    display(head);
    return 0;

}



#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=data;
    return newnode;
}
struct node* insertnode(struct node*head,int data){
    struct node* newnode=createnode(data);
    if(head==NULL){
        newnode->next=newnode;
        return newnode;

    }
    struct node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    return head;
}
void display(struct node*head){
    if(head==NULL){
        printf("Cll is empty");
    }
    struct node* temp=head;
    do{
        printf("%d -> ",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("Back to head");
}
int main(){
    struct node* head=NULL;
    int n;
    scanf("%d",&n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    head=insertnode(head,n);
    display(head);
    return 0;

}

#include <stdio.h>
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    int arr[]={1,7,0,4,9,2};
    printArray(arr,6);
    printf("\n");
    insertionSort(arr,6);
    printArray(arr,6);

}


#include <stdio.h>
void selectionsort(int arr[],int n){
    int i,midindex,j;
    for(i=0;i<n-1;i++){
        midindex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[midindex]){
                midindex=j;
            }
        }
        int temp=arr[midindex];
        arr[midindex]=arr[i];
        arr[i]=temp;

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    int arr[]={1,7,0,4,9,2};
    printArray(arr,6);
    printf("\n");
    selectionsort(arr,6);
    printArray(arr,6);

}


#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    int arr[]={1,7,0,4,9,2};
    printArray(arr,6);
    printf("\n");
    quicksort(arr,0,5);
    printArray(arr,6);
}

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insertnode(struct node*root,int data){
    if(root==NULL){
        return createnode(data);
    }
    if(data<root->data){
        root->left=insertnode(root->left,data);
    }
    if(data>root->data){
        root->right=insertnode(root->right,data);
    }
    return root;
}
void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d -> ",root->data);
    inorder(root->right);
}
void preorder(struct node*root){
    if(root==NULL){
        return;
    }
    printf("%d -> ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d -> ",root->data);
    
}
int main(){
    struct node* root=NULL;
    root=insertnode(root,10);
    root=insertnode(root,20);
    root=insertnode(root,30);
    root=insertnode(root,40);
    root=insertnode(root,50);
    printf("Inorder Traversal: \n");
    inorder(root);
    printf("preorder Traversal: \n");
    preorder(root);
    printf("postorder Traversal: \n");
    postorder(root);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Structure for a BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function to search for a value in the BST
struct Node* searchNode(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return searchNode(root->left, key);
    } else {
        return searchNode(root->right, key);
    }
}

// Function to find the minimum value node in the BST
struct Node* findMinNode(struct Node* root) {
    struct Node* current = root;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete a node from the BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        struct Node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// In-order Traversal (Left -> Root -> Right)
void inOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

// Pre-order Traversal (Root -> Left -> Right)
void preOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Post-order Traversal (Left -> Right -> Root)
void postOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ", root->data);
}

int main() {
    struct Node* root = NULL;
    int choice, data, key;

    while (1) {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert Node\n");
        printf("2. Search Node\n");
        printf("3. Delete Node\n");
        printf("4. In-order Traversal\n");
        printf("5. Pre-order Traversal\n");
        printf("6. Post-order Traversal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;

            case 2:
                printf("Enter the value to search: ");
                scanf("%d", &key);
                struct Node* found = searchNode(root, key);
                if (found) {
                    printf("Value %d found in the BST.\n", key);
                } else {
                    printf("Value %d not found in the BST.\n", key);
                }
                break;

            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                printf("Value %d deleted (if it existed).\n", key);
                break;

            case 4:
                printf("In-order Traversal: ");
                inOrderTraversal(root);
                printf("\n");
                break;

            case 5:
                printf("Pre-order Traversal: ");
                preOrderTraversal(root);
                printf("\n");
                break;

            case 6:
                printf("Post-order Traversal: ");
                postOrderTraversal(root);
                printf("\n");
                break;

            case 7:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#define max 5
int arr[5];
void init(){
    for(int i=0;i<max;i++){
        arr[i]=-1;
    }
}
void insert(int value){
    int key=value%max;
    if(arr[key]==-1){
        arr[key]=value;
        printf("%d is inserted at index %d\n",value,key);
    }
    else{
        printf("Collision occured\n");
        printf("%d position has a %d already\n",key,arr[key]);
    }
}
void delete(int value){
    int key=value%max;
    if(arr[key]==value){
        arr[key]=-1;
    }
    else{
        printf("%d not found in hashtable\n",value);
    }
}
void search(int value){
    int key=value%max;
    if(arr[key]==value){
        printf("%d found at index %d\n",value,key);
    }
    else{
        printf("%d not found in hashtable\n");
    }
}
void display(){
    for(int i=0;i<max;i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    init();
    insert(10);
    insert(22);
    insert(9);
    delete(2);
    search(10);
    display();
    return 0;
}
*/
#include <stdio.h>
#include<stdlib.h>
void mergesort(int arr[],int left,int right,int mid){
    int i=left;
    int j=mid+1;
    int k=right;
    int temp[right-left+1];
    while(i<=mid&&j<=right){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=right){
            temp[k++]=arr[j++];
        }
    }
    for(k=0;k<right-left;k++){
        arr[i]=temp[right];
    }
}
void merge(int arr[],int left,int right){
    if(left<right){
        int mid=(right+left)/2;
        merge(arr,left,mid);
        merge(arr,mid,right);
        mergesort(arr,left,right,mid);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,7,4,9,0};
    printArray(arr,5);
    merge(arr,0,5);
    printArray(arr,5);
    return 0;
}
