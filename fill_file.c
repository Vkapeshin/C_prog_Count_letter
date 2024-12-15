#include <stdio.h>
#define TEXT_SIZE 1000

void fill_file(FILE *fd){
		
	char text[TEXT_SIZE];
	printf("Print some text: \n");
	scanf("%s", text);
	//fgets(text, sizeof(text), stdin);
	fputs(text, fd);
	fclose(fd);
}
