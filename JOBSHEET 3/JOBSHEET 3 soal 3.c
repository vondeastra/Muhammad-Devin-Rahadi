// tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

#define phi 3.14

int main(){
	
	// deklarasi konstanta dan variabel  
    float volume, luas, d;
    
       // user menginput nilai
         printf("Masukkan nilai diameter bola = ");
         scanf("%f", &d);
       
       // menghitung volume bola
        volume = (4.0 / 3.0) * phi * (d/2)*(d/2)*(d/2);
        
      // menghitung luas bola
        luas = 4.0 * phi *(d/2) * (d/2);
		
	// output hasil
	   printf("Volume bola = %.2f cm^3\n", volume); 
	   printf("Luas permukaan bola = %.2f cm^2", luas);
	   
	   return 0;

	
}