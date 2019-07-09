#include <stdio.h>

void sort(int* ptr){
	
	int i, j, firstVal, secondVal;
	
	int* ptrStart = ptr;
	
	for(i = 0; i < 10; i++){
		
		ptr = ptrStart;
		
		for(j = 0; j < 9; j++){
			
			firstVal = *ptr;
			*ptr++;
			secondVal = *ptr;
			
			printf("%d %d\n", firstVal, secondVal);
			
		}
		
	}
	
}

void printPtr(int* ptr){
	
	int i;
	for(i = 0; i < 10; i++){
		
		printf("%d\n", *(ptr));
		*ptr++;
		
	}
	
	printf("\n");
	//printf("%d\n", *ptr);
	
}

int main(){
	
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	int* aPtr = a;
	
	printPtr(aPtr);
	sort(aPtr);
	printPtr(aPtr);
	
}