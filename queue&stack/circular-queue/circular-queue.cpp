#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key;
} element;
element queue[MAX_QUEUE_SIZE];
int front = 0, rear = 0;

void addq(element item) {
	rear = (rear + 1) % MAX_QUEUE_SIZE; //if rear == MAX_QUEUE_SIZE then rear = 0
	if (front == rear)
		//queueFull(rear);
	queue[rear] = item;
}
element deleteq() {
	if (front == rear) {
		fprintf(stderr, "Queue is empty, cannot remove element");
		exit(EXIT_FAILURE);
	}
	front = (front + 1) % MAX_QUEUE_SIZE;
	return queue[front];
}