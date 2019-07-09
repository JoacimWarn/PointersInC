#include <stdio.h>

int compare(void* a, void* b){
	
	int* a1;
	int* b1;
	a1 = (int *)a;
	b1 = (int *)b;
	
	printf("%d %d\n", *a1, *b1);
	
	return (*a1 > *b1);
	
}

int main(){
	
	int a[] = {1, 3, 5};
	int b[] = {1, 3, 5};
	
	printf("generic comparing method\n");
	
	printf("%d\n", compare((void *)&a[1], (void *)&b[2]) );
	
	return 0;
	
}