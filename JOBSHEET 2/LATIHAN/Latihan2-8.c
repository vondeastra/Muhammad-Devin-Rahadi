#include<stdio.h>

int main(){
	char name[50], email[50];
	
	printf("tugas muhammad devin rahadi 23343076\n\n");
	printf("NAMA : ");
	fgets(name, sizeof(name), stdin);
	printf("EMAIL : ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n-----------------------------\n");
	printf("Nama anda : %s", name);
	printf("Email anda : %s", email);
	
	return 0;
}