// tugas muhammad devin rahadi 23343076
#include <stdio.h>

int main() {
    double total_pembelian, diskon, cashback;
    printf("Muhammad Devin Rahadi 23343076\n\n");
    
    printf("Selamat datang di TOSERBA\n");
    printf("Masukkan total pembelian Anda (dalam Rp): ");
    scanf("%lf", &total_pembelian);

    if (total_pembelian <= 75000) {
        // Diskon 5%
        diskon = 0.05 * total_pembelian;
        cashback = 0;
    } else if (total_pembelian <= 125000) {
        // Diskon 15%
        diskon = 0.15 * total_pembelian;
        cashback = 0;
    } else {
        // Diskon 25% + Cashback Rp. 5000
        diskon = 0.25 * total_pembelian;
        cashback = 5000;
    }

    // Menghitung total pembayaran setelah diskon dan cashback
    double total_pembayaran = total_pembelian - diskon + cashback;

    printf("Total pembelian: Rp. %.2lf\n", total_pembelian);
    printf("Diskon: Rp. %.2lf\n", diskon);
    printf("Cashback: Rp. %.2lf\n", cashback);
    printf("Total pembayaran: Rp. %.2lf\n", total_pembayaran);

    return 0;
}
