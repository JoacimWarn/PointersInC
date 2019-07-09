#include <stdio.h>

char* str_chr(const char* str, int c){
	
	while(*str){
		
		*str++;
		
		if(*str == c) return (char *)str;
		
	}
	
	return NULL;
	
}

int main(){
	
	char a[40] = "Hello world!";
	
	char* aPtr = str_chr(a,'l');
	
	puts(aPtr);
	
	printf("%s",str_chr(a,'o'));
	
	return 0;
	
}