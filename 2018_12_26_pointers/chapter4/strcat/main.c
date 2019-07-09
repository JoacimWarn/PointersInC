#include <stdio.h>

int str_len(const char* str){
	
	int len = 0;
	
	while(*str){
		
		*str++;
		len++;
		
	}
	
	return len;
	
}

char* str_cat(char* destination, const char* source){
	
	*destination++ = ' ';
	
	while(*source){
		
		*destination++ = *source++;
		
	}
	
	*destination = '\0';
	
	return destination;
	
}

int main(){
	
	char a[40] = "Hello there";
	char b[20] = "My name is Bob";
	
	char* strPtr = &a[str_len(a)];
	
	str_cat(strPtr, b);
	
	printf("%s\n",a);
	
}