//Tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

int main() {
    int durasiFilm; // Durasi film dalam jam
    int tarifPertama = 15000; // Tarif untuk jam pertama
    int totalBiaya;
    
    printf("muhammad devin rahadi 23343076\n\n");
    
    printf("Masukkan durasi film: ");
    scanf("%d", &durasiFilm);

    // Menghitung total biaya dengan menggunakan operator
    totalBiaya = (durasiFilm - 1) * (tarifPertama / 2) + tarifPertama;

    // Menampilkan total biaya
    printf("Total biaya: Rp %d\n", totalBiaya);

    return 0;
}
