#include <stdio.h>

void main(){
	char ulangi = 'y';
	int counter = 0;
	
	//perulangan while
	while(ulangi == 'y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf(" %c", &ulangi);
		
		// increament counter
		counter++;
	}
	
	printf("\n\n------------------\n");
	printf("Perulangan Selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
}