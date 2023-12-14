// tugas muhammad devin rahadi 23343076
#include <stdio.h>

int main() {
    int detik, jam, menit, sisa_detik;
    printf("muhammad devin rahadi 23343076\n\n");

    // Meminta pengguna memasukkan jumlah detik
    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);

    // Menghitung jam, menit, dan sisa detik
    jam = detik / 3600;
    sisa_detik = detik % 3600;
    menit = sisa_detik / 60;
    sisa_detik = sisa_detik % 60;

    // Menampilkan hasil konversi
    printf("KONVERSI = %d jam, %d menit, %d detik\n", jam, menit, sisa_detik);

    return 0;
}
