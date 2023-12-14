#include<stdio.h>

int main(){
	char name[20], web_addres[30];
	
	printf("tugas muhammad devin rahadi 23343076\n\n");
	printf("Nama : ");
	scanf("%s", &name);
	printf("Alamat web : ");
	scanf("%s", &web_addres);
	
	printf("\n---------------------------\n");
	printf("Nama yang diinputkan : %s\n", name);
	printf("Alamat web yang diinputkan : %s", web_addres);
	return 0;
}