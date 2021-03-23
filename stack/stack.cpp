#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 /* maximum stack size */
typedef struct {
	int key;
	/* other fields may be added */
} element;
void push(element item);
void stackFull();
int top = -1;
element stack[MAX_STACK_SIZE];

void push(element item) {
	if (top >= MAX_STACK_SIZE - 1) {
		stackFull();
		return;
	}
	stack[++top] = item;
}

element pop() {
	if (top == -1) {
		fprintf(stderr, "Stack is empty, cannot remove element");
		exit(EXIT_FAILURE);
	}
	return stack[top--];
}

void stackFull() {
	fprintf(stderr, "Stack is full, cannot add element");
	exit(EXIT_FAILURE);
}

int main() {
	element e, f;

	e.key = 3;
	push(e);
	e.key = 2;
	push(e);
	f = pop();
	printf("%d %d\n", top, f.key);
}
