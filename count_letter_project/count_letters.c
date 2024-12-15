#include <stdio.h>
#include <stdlib.h>
#include "count_letters.h"
#include "create_file.h"
#include "fill_file.h"
#include "menu.h"
#define CONS_LENGHT 40
#define VOW_LENGHT 12

void count_consonants(char *file_name){
	char 	c;
	int 	text_from_file_length = 0;
	FILE 	*fd;
	int consonants_list_length = CONS_LENGHT;
	int consonants = 0;
	char consonants_list[] = {
		'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z', 
		'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'
	};


	if((fd = fopen(file_name, "r")) == NULL){
			perror(file_name);
			exit(1);
	}
	
	while ((c = fgetc(fd)) != EOF){
		text_from_file_length++;
		for (int i = 0; i < consonants_list_length; i++){
                	if (c == consonants_list[i]){
                        	consonants++;
	                }
	        }
	}

	printf("In your file: %d letters and %d consonants\n\n", text_from_file_length, consonants);
	fclose(fd);
}

void count_vowels(char *file_name){
        char    c;
        int     text_from_file_length = 0;
        FILE    *fd;
	int vowels_list_length = VOW_LENGHT;
	int vowels = 0;
	char vowels_list[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
        
	if((fd = fopen(file_name, "r")) == NULL){
                        perror(file_name);
                        exit(1);
        }

	while ((c = fgetc(fd)) != EOF){
                text_from_file_length++;
                for (int i = 0; i < vowels_list_length; i++){
                       	if (c == vowels_list[i]){
                               	vowels++;
                       	}
                }
        }
        
	printf("In your file: %d letters and %d vowels\n\n", text_from_file_length, vowels);
	fclose(fd);
}
