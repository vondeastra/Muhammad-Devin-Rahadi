#include <stdio.h>

int main(){
	char nama[20];
	
	printf("Masukkan nama anda: ");
	gets(nama);
	
	printf("Hello, %s. Salam kenal.", nama);
	
	return 0;
}