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

