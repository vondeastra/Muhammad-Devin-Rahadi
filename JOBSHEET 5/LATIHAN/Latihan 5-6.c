#include <stdio.h>

void main(){
	char username[30], password[30];
	
	printf("=== Welcome to awesome progam ===\n");
	printf("Username: ");
	scanf("%s", &username);
	printf("password: ");
	scanf("%s", &password);
	
	if(strcmp(username, "petanikode") == 0){
		if(strcmp(password, "kopi") == 0){
			printf("Selamat datang bos!\n");
		} else {
			printf("Password salah, coba lagi!\n");
		}
	} else {
		printf("Anda belum terdaftar\n");
	}
}