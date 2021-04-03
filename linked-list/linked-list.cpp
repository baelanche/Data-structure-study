#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct listNode {
	char data[4];
	struct listNode* link = NULL;
};
int main() {
	listNode *first = (listNode *)malloc(sizeof(struct listNode));
	strcpy(first->data, "BAT");
	first->link = NULL;

	listNode *second = (listNode *)malloc(sizeof(struct listNode));
	strcpy(second->data, "CAT");
	second->link = first;

	printf("%s", second->link->data);
}