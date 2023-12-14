// Tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

// tetapkan nilai tetap
#define x 14250

int main()
{
	printf("tugas muhammad devin rahadi 23343076\n\n");
   // Deklarasi variabel 
     float rupiah, dollar;

   // user menginputkan nilai rupiah
       printf("masukkan nilai Rupiah: Rp.");
       scanf("%f", &rupiah);

   // Proses konversi nilai rupiah ke dollar
     dollar = rupiah / x;

   // Output hasil convert 
       printf("nilai Dollar adalah: $%.2f\n", dollar);

  return 0;
}
