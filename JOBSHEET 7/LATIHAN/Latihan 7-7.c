#include <stdio.h>

void main(){
	int nilai[5] = {32, 22, 11, 44, 21};
	
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi arrray nilai: %d\n", length);
}