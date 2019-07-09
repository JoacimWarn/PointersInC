#include <stdio.h>

struct tag{
	
	char lname[20];
	char fname[20];
	int age;
	float rate;
	
};

struct tag my_struct;

void show_name(struct tag* p){
	
	printf("%s\n", p->fname);
	printf("%s\n", p->lname);
	printf("%d\n", p->age);
	
	printf("%d\n", (*p).age);
	
}

char* str_cpy(char* destination, const char* source){
	
	while(*source){
		
		*destination++ = *source++;
		
	}
	
	*destination = '\0';
	
	return destination;
	
}

int main(){
	
	struct tag *ptrStruct = &my_struct;
	str_cpy(my_struct.lname, "Jensen");
	str_cpy(my_struct.fname, "Ted");
	
	//printf("%s\n", my_struct.fname);
	//printf("%s\n", my_struct.lname);
	
	my_struct.age = 63;
	
	show_name(ptrStruct);
	
	return 0;
	
}