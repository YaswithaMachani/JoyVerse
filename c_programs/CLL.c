#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the end
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        newNode->next = newNode; // Point to itself to form a circular link
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head; // Complete the circular link
    return head;
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Back to Head)\n");
}

// Function to delete a node with a specific value
struct Node* deleteNode(struct Node* head, int key) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    // If the head needs to be deleted
    if (head->data == key) {
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        free(head);
        return temp->next; // New head
    }

    // Traverse to find the key
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != head && temp->data != key);

    if (temp == head) {
        printf("Key not found.\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);
    return head;
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the circular linked list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    printf("Circular Linked List: ");
    displayList(head);

    // Delete a node
    head = deleteNode(head, 20);
    printf("After Deletion: ");
    displayList(head);

    return 0;
}
