#include <stdio.h>

void main(){
	// membuat variabel
	int umur = 19;
	float tinggi = 175.6;
	
	//membuat pointer
	int *pointer_umur = &umur;
	int *pointer2 = &umur;
	float *p_tinggi = &tinggi;
	
	//mencetak alamat memori variabel
	printf("alamat memori variabel 'umur' = %d\n", &umur);
	printf("alamat memori variabel 'tinggi' = &d\n", &tinggi);
	//mencetak alamat memori variabel
	printf("referensi alamat memori *pointer_umur = %d\n", pointer_umur);
	printf("referensi alamat memori *pointer = %d\n", pointer2);
	printf("referensi alamat memori *p_tinggi = %d\n", p_tinggi);
	
}