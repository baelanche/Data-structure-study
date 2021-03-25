#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100
typedef enum {
	lparen, rparen, plus, minus, times, divide, mod, eos, operand
} precedence;
int stack[MAX_STACK_SIZE];
char expr[MAX_EXPR_SIZE];
//precedence stack[MAX_STACK_SIZE];
int top = -1;
static int isp[] = { 0, 19, 12, 12, 13, 13, 13, 0 };
static int icp[] = { 20, 19, 12, 12, 13, 13, 13, 0 };
precedence getToken(char *symbol, int *n);
void push(int n);
int pop();
void stackFull();
int eval(void) {
	precedence token;
	char symbol;
	int op1, op2;
	int n = 0, top = -1;
	token = getToken(&symbol, &n);
	while (token != eos) {
		if (token == operand) push(symbol - '0');
		else {
			op2 = pop();
			op1 = pop();
			switch (token) {
			case plus: push(op1 + op2); break;
			case minus: push(op1 - op2); break;
			case times: push(op1*op2); break;
			case divide: push(op1 / op2); break;
			case mod: push(op1%op2); break;
			}
		}
		token = getToken(&symbol, &n);
	}
	return pop();
}
precedence getToken(char *symbol, int *n) {
	*symbol = expr[(*n)++];
	switch (*symbol) {
	case '(': return lparen;
	case ')': return rparen;
	case '+': return plus;
	case '-': return minus;
	case '/': return divide;
	case '*': return times;
	case '%': return mod;
	case ' ': return eos;
	default: return operand;
	}
}
void push(int n) {
	if (top >= MAX_STACK_SIZE - 1) {
		stackFull();
		return;
	}
	stack[++top] = n;
}
void stackFull() {
	fprintf(stderr, "Stack is full, cannot add element");
	exit(EXIT_FAILURE);
}
int pop() {
	if (top == -1) {
		fprintf(stderr, "Stack is empty, cannot remove element");
		exit(EXIT_FAILURE);
	}
	return stack[top--];
}
int main() {
	push(1);
}