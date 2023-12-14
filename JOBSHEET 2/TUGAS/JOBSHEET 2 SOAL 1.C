//Created by 23343076_MUHAMMAD DEVIN RAHADI
#include <stdio.h>

int main(){
   // deklarasi variabel
   char nama[22];
   
   // input nama user
   printf("Tugas Muhammad Devin Rahadi\n\n");
   printf("Tuliskan nama mu : ");
   fgets(nama, sizeof(nama), stdin);
   
   // output dari nama user
   printf("Selamat datang %s dalam pemograman C", nama); 

	return 0;
}