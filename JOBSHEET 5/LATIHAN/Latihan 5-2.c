#include <stdio.h>

void main(){
	char password[30];
	
	printf("=== Progam Login ===\n");
	printf("Masukkan password : ");
	scanf("%s", &password);
	
	if( strcmp(password, "kopi") == 0){
		printf("Selamat datang bos!\n");
	} else {
		printf("Paasword salah, coba lagi!\n");
	}
	
	printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}