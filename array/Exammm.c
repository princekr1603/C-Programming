#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct Queue* queue) {
    queue->front = queue->rear = -1;
}

bool isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

bool isFull(struct Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(struct Queue* queue, int value) {
      if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }

    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->items[queue->rear] = value;
    if (isEmpty(queue)) {
        queue->front = queue->rear;
    }
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    int removedItem = queue->items[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return removedItem;
}

void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = queue->front; i != queue->rear; i = (i + 1) % MAX_SIZE) {
        printf("%d, ", queue->items[i]);
    }
    printf("%d\n", queue->items[queue->rear]);
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    display(&queue);

    printf("Dequeued item: %d\n", dequeue(&queue));
    display(&queue);

    enqueue(&queue, 40);
    display(&queue);

    return 0;
}





