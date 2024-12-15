#include <stdio.h>
#include <stdlib.h>
#include "count_letters.h"
#include "create_file.h"
#include "fill_file.h"
#include "menu.h"

FILE *create_file(char *file_name_main){
	
	//Created string with file_name
	//String in array[50]
	
	char file_name_in[50];
	printf("Input name for new file: ");
	scanf("%s", file_name_in);
	
	//Create new string with dynamic memory allocated 

	int length_file_name = 0;	
	for (; file_name_in[length_file_name] != '\0'; length_file_name++);
	file_name_main = (char *)malloc(1 + sizeof((char)length_file_name));
	
	printf("\nLength of file_name_in: %d\n\n", length_file_name);

	int i = 0;
	for (; (file_name_main[i] = file_name_in[i]) != '\0'; i++);
	file_name_main[i] = '\0';

	printf("%s\t- file_name_in\n%s\t- file_name_main\n", file_name_in, file_name_main);

	FILE *fd;
	if ((fd = fopen(file_name_in, "w+")) == NULL){
		perror(file_name_in);
		exit(1);
	}
	
	printf("\nFile %s creted.\nFile name '%s' copy to main\n", file_name_in, file_name_main);
	return fd;
}

