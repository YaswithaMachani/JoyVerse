#include <stdio.h>
#include <stdlib.h>

// Define the structure of a queue node
struct Node {
    int data;
    struct Node* next;
};

// Define the structure of the queue
struct Queue {
    struct Node *front, *rear;
};

// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Enqueue operation: Add an element to the queue
void enqueue(struct Queue* queue, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow\n");
    }
    newNode->data = value;
    newNode->next = NULL;

    if (queue->rear == NULL) { // If the queue is empty
        queue->front = queue->rear = newNode;
        printf("%d enqueued to queue\n", value);
    }

    queue->rear->next = newNode;
    queue->rear = newNode;
    printf("%d enqueued to queue\n", value);
}

// Dequeue operation: Remove and return the front element
void dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue underflow\n");
    }
    int dequeuedValue = queue->front->data;
    queue->front = queue->front->next;
    printf("%d",dequeuedValue);
}

// Peek operation: Get the front element without removing it
void peek(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
    }
    printf("%d",queue->front->data);
}

// Check if the queue is empty
void isEmpty(struct Queue* queue) {
    if(queue->front == NULL){
        printf("empty");
    }
    else{
        printf("Not empty");
    }
}

// Display the queue
void display(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = queue->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Queue* queue = createQueue(); // Create an empty queue

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    display(queue);

    peek(queue);

    dequeue(queue);
    display(queue);

    dequeue(queue);
    display(queue);

    isEmpty(queue);

    return 0;
}
