#include <stdio.h>

char* str_cpy(char* destination, const char* source){
	
	while(*source){
		
		*destination++ = *source++;
		
	}
	
	*destination = '\0';
	
	return destination;
	
}

int main(){
	
	char a[40];
	char b[40];
	
	str_cpy(a, "Hello world");
	str_cpy(b, a);
	
	printf("%s", b);
	
	return 0;
	
}