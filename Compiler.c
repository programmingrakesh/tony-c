#include<stdio.h>
#include<stdlib.h>

char Tokenizer(char *datum){
	printf("%c", *datum);
	return 0 ;
}



char open_file(){
	FILE*ptr = fopen("new.tony", "r");
	char datum;
	
	while((datum=getc(ptr)) != EOF){
		Tokenizer(&datum);
	}
	fclose(ptr);
	return 0;
}

char main(){
	open_file();
	return 0;
}
