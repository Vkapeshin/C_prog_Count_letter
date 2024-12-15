#include <stdio.h>
#include "count_letters.h"
#include "create_file.h"
#include "fill_file.h"
#include "menu.h"

int menu(){
	int choose;

	printf("What you want?\n");
	printf("1. Count vowels.\n");
	printf("2. Count consonants.\n");
	scanf("%d", &choose);
	while (choose < 1 && choose > 2){
		printf("Wrong input. Try again.\n");
		scanf("%d", &choose);
	}
	return choose;
}
