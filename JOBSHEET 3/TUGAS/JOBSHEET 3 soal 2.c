//Tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

int main() {
    float c, f, k, r;
    printf("tugas muhammad devin rahadi 23343076\n\n");

     // Masukkan suhu dalam Celcius
       printf("Input suhu Celcius: ");
       scanf("%f", &c);
    
     // Konversi Celcius ke Kelvin
     k = c + 273.15;
      
     // Konversi Celcius ke Fahrenheit
     f = (c * 1.8) + 32;
    
     // Konversi Celcius ke Reamur
     r = c * 0.8;

      // Tampilkan hasil konversi
        printf("Suhu dalam Kelvin = %.2f\n", k);
        printf("Suhu dalam Fareinheit = %.2f\n", f);
        printf("Suhu dalam Reamur = %.2f\n",  r);
    
	return 0;
    
}

   