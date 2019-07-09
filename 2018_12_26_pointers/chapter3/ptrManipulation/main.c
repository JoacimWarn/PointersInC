#include <stdio.h>

char* my_Strcpy(char* destination, const char* source){
	
	char* ptr = destination;
	
	while(*source != '\0'){
		
		*ptr++ = *source++;
		*(ptr++);
		
	}
	*ptr = '\0';
	
	return destination;
	
}

int main(){
	
	char strA[40] = "This is a string";
	char strB[40];
	char* stringPtr = strA;
	
	puts(stringPtr);
	my_Strcpy(strB, stringPtr);
	puts(strB);
	
	my_Strcpy(stringPtr, strB);
	puts(stringPtr);
	
	char a[20];
	int i;
	
	a[3] = 'x';
	printf("%c\n",a[3]);
	3[a] = 'x';
	printf("%c\n",a[3]);
	
	return 0;
	
}