#include <stdio.h>

void int_copy(int* destination, const int* source, int nbr){
	
	while(nbr > 0){
		
		*destination++ = *source++;
		
		nbr--;
		
	}
	
}

int main(){
	
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int b[10];
	int* intPtr = a;
	
	int_copy(b, intPtr, 7);
	
	int i;
	for(i = 0; i < 10; i++) printf("%d\n", b[i]);
	
	return 0;
	
}