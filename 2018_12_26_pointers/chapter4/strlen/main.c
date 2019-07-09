#include <stdio.h>

int str_len(const char* str){
	
	int len = 0;
	
	while(*str){
		
		*str++;
		len++;
		
	}
	
	return len;
	
}

int main(){
	
	char a[40] = "Hello, world";
	printf("%s is %d long",a,str_len(a));
	
}