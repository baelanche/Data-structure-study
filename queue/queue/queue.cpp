#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key;
} element;
element queue[MAX_QUEUE_SIZE];
void queueFull();

int front = -1;
int rear = -1;

void addq(element item) {
	if (rear == MAX_QUEUE_SIZE - 1)
		queueFull();
	queue[++rear] = item;
}

element deleteq() {
	/* is empty */
	if (front == rear) {
		fprintf(stderr, "Queue is full, cannot add element");
		exit(EXIT_FAILURE);
	}
	return queue[++front];
}

void queueFull() {
	fprintf(stderr, "Queue is full, cannot add element");
	exit(EXIT_FAILURE);
}

int main() {
	element e, f;
	e.key = 3;
	addq(e);
	e.key = 2;
	addq(e);
	f = deleteq();
	printf("%d %d %d\n", front, rear, f.key);
}