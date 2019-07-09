#include <stdio.h>

int main(){
	
	const int ROWS = 5;
	const int COLS = 10;
	
	int row, col;
	int multi[ROWS][COLS];
	int* matricePtr = &multi[0][0];
	
	for(row = 0; row < ROWS; row++){
		
		for(col = 0; col < COLS; col++){
			
			*matricePtr++ = col * row;
			
		}
		
	}
	
	matricePtr = &multi[0][0];
	
	for(row = 0; row < ROWS; row++){
		
		for(col = 0; col < COLS; col++){
			
			printf("%d\n", *matricePtr++);
			
		}
		
	}
	
	return 0;
	
}