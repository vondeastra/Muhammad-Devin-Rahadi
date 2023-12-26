//create by muhammad devin rahadi 23343076
#include <stdio.h>

int main() {
    // Seed untuk angka acak berdasarkan waktu 
    unsigned int seed = 0;
    asm volatile("rdtsc" : "=A"(seed));
    srand(seed);

    // Menghasilkan nomor acak antara 1 dan 20
    int nomorKomputer = rand() % 20 + 1;
    
    printf("Muhammad Devin Rahadi 23343076\n\n");
    printf("Selamat datang di Game Tebak Angka!\n");
    printf("Komputer telah memilih sebuah nomor antara 1 dan 20.\n");

    int tebakan;
    int jumlahTebakan = 0;
    int maksTebakan = 5;  // Batas jumlah tebakan

    while (1) {
        // Meminta pengguna untuk menebak nomor
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);

        // Memeriksa apakah tebakan benar, terlalu rendah, atau terlalu tinggi
        if (tebakan == nomorKomputer) {
            printf("Selamat! Anda menebak dengan benar.\n");
            break;
        } else if (tebakan < nomorKomputer) {
            printf("Tebakan terlalu rendah. Coba lagi!\n");
        } else {
            printf("Tebakan terlalu tinggi. Coba lagi!\n");
        }

        jumlahTebakan++;

        // Memeriksa apakah jumlah tebakan telah mencapai batas
        if (jumlahTebakan == maksTebakan) {
            printf("Anda telah melebihi batas tebakan. Nomor yang benar adalah %d.\n", nomorKomputer);
            break;
        }
    }

    return 0;
}
