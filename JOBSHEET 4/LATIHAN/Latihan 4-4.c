#include<stdio.h>

void main(){
	int a, b;
	
	a = 5;
	b = 10;
	
	b += a;
	printf("Hasil dari b += a adalah : %d\n", b);
	
	b -= a;
	printf("Hasil dari b -= a adalah : %d\n", b);
	
	b *= a;
	printf("Hasil dari b *= a adalah : %d\n", b);
	
	b /= a;
	printf("Hasil dari b /= a adalah : %d\n", b);
	
	b %= a;
	printf("Hasil dari b %= a adalah : %d\n", b);
}