#include <stdio.h>

void main(){
	//membuat variabel
	int umur = 19;
	float tinggi = 175.6;
	
	//mmebuat pointer 
	int *pointer_umur = &umur;
	int *pointer2 = &umur;
	float *p_tinggi = &tinggi;
	
	//mencetak alamat memori
	printf("alamat memori variabel 'umur' = %d\n", &umur );
	printf("alamat memori varibael 'tinggi' = %d\n", &tinggi);
	//mencetak referensi alamat memori pointer
	printf("referensi alamat memori *pointer_umur = %d\n", pointer_umur);
	printf("referensi alamat memori *pointer2 = %d\n", pointer_umur);
	printf("referensi alamat memori *p_tinggi = %d\n", p_tinggi);
	
	//mencetak alamat memori pointer
	printf("alamat memori *pointer_umur = %d\n", &pointer_umur);
	printf("alamat memori*pointer2 = %d\n", &pointer2);
	printf("alamat memori p_tinggi = %d\n", &p_tinggi);   
}