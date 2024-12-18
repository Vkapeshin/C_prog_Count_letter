#include <stdio.h>
#include <stdlib.h>
#include "count_letters.h"
#include "create_file.h"
#include "fill_file.h"
#include "menu.h"

FILE *create_file(char **file_name_main){

	//Created string with file_name
	//String in array[50]

	char file_name_in[50];
	printf("Input name for new file: ");
	scanf("%s", file_name_in);
	char *tmp;

	//Create new string with dynamic memory allocated

	int file_name_length = 0;
	for (; file_name_in[file_name_length] != '\0'; file_name_length++);
	tmp = (char *)malloc(1 + (sizeof(char)*file_name_length));

	printf("\nLength of file_name_in: %d\n\n", file_name_length);

	int i = 0;
	for (; (tmp[i] = file_name_in[i]) != '\0'; i++);
	tmp[i] = '\0';

	*file_name_main = tmp;
	printf("%s\t- file_name_in\n%s\t- file_name_main\n", file_name_in, *file_name_main);

	FILE *fd;
	if ((fd = fopen(file_name_in, "w+")) == NULL){
		perror(file_name_in);
		exit(1);
	}

	printf("\nFile %s creted.\nFile name '%s' copy to main\n", file_name_in, *file_name_main);
	return fd;
}

