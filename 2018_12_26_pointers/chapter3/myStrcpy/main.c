#include <stdio.h>

char* my_Strcpy(char* destination, const char* source){
	
	char* ptr = destination;
	
	while(*source != '\0'){
		
		*ptr++ = *source++;
		
	}
	*ptr = '\0';
	
	return destination;
	
}

int main(){
	
	char strA[80] = "This is original text from strA";
	char strB[80];
	char* strPointer = strA;
	
	puts(strA);
	my_Strcpy(strB,strPointer);
	puts(strB);
	
	
	return 0;
	
}