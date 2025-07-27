#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int value) {
	 if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front) {
		printf("Queue is full (Overflow)\n");
        return;
    }
if (front == -1) {
        front = rear = 0;
	} else {
        rear = (rear + 1) % SIZE;
    }
queue[rear] = value;
 printf("Inserted: %d\n", value);
}
void dequeue() {
    if (front == -1) {
	     printf("Queue is empty (Underflow)\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;
	} else {
        front = (front + 1) % SIZE;
    }
}
void display() {
    if (front == -1) {
	     printf("Queue is empty\n");
        return;
    }
     printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
int main() {
    int choice, value;
while (1) {
        printf("\nCircular Queue Menu:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    


~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
program.c[+] [unix] (19:45 27/07/2025)                                                                                                                                                28,2-9 All
-- INSERT --


