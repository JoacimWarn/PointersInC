#include <stdio.h>
#include <stdlib.h>

#define PADDING 2

struct myStruct{
	
	struct myStruct* next;
	short n;
	char padding[PADDING];
	int i;
	
};

int main(){
	
	struct myStruct* root;
	root = NULL;
	
	root = (struct myStruct*) malloc(sizeof(struct myStruct));
	
	root->next = (struct myStruct*) malloc(sizeof(struct myStruct));
	
	printf("%d\n", sizeof(root->next));
	printf("%d\n", sizeof(root->n));
	printf("%d\n", sizeof(root->i));
	printf("%d\n", sizeof(root->padding));
	
	printf("%p\n", root);
	printf("%p\n", root->next);
	
	free(root->next);
	
	root->next = NULL;
	
	printf("%p\n", root->next);
	printf("%p\n", root);
	
	return 0;
	
}