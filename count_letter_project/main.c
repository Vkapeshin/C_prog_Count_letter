#include <stdio.h>
#include "count_letters.h"
#include "create_file.h"
#include "fill_file.h"
#include "menu.h"

int main(){
	FILE *fd;
	int choose;
	char *file_name = {};
	if ((fd = create_file(file_name)) == NULL){
		printf("Error in main function.");
		printf("Cant assigned fd from create_file.");
	}


	printf("\nFile name in MAIN: %s\n", file_name);

	fill_file(fd);
	choose = menu();
        switch (choose){
                case 1:
			count_vowels(file_name);
                        break;
                case 2:
                        count_consonants(file_name);
                        break;
                default:
                        printf("Function check_choose dont get right number.\n");
                        return 1;
        }

	return 0;
}

