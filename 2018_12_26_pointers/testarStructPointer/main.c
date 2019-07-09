#include <stdio.h>
#include <stdlib.h>

struct word{
	
	struct word* nextWord;
	char* theWord;
	int count;
	
};

//return 0 if same word
int str_cmp(char* s, char* t){
	
	while(*s++ == *t++){
		
		if(*s == '\0' && *t == '\0') return 0;
		
	}
	
	return 1;
	
}

void printWord(struct word* temp){
	
	if(temp != NULL){
		
		printWord(temp->nextWord);
		printf("%s\t\t%d\t\t%p\n", temp->theWord, temp->count, temp);
		
	}
	
}

struct word* addWord(struct word* temp, char* word){
	
	if(temp == NULL){
		
		temp = (struct word*) malloc(sizeof(struct word));
		temp->theWord = word;
		temp->count = 1;
		temp->nextWord = NULL;
		
	}
	else if(!str_cmp(word, temp->theWord)){
		
		temp->count++;
		
	}
	else{
		
		temp->nextWord = addWord(temp->nextWord, word);
		
	}
	
	return temp;
	
}

int main(){
	
	char word1[] = "word1";
	char word2[] = "word2";
	char word3[] = "word3";
	
	struct word* root;
	root = NULL;
	
	root = addWord(root, word1);
	root = addWord(root, word2);
	root = addWord(root, word3);
	
	root = addWord(root, "word2");
	
	root = addWord(root, "word1");
	root = addWord(root, "word1");
	root = addWord(root, "word1");
	
	printWord(root);
	
	return 0;
	
}