#include <stdio.h>

// Fungsi untuk menghitung besarnya diskon
float potong(float total_pembelian) {
    float diskon = 0.0;

    if (total_pembelian > 1000000 && total_pembelian <= 3000000) {
        diskon = 0.2; // Diskon 20%
    } else if (total_pembelian > 3000000) {
        diskon = 0.35; // Diskon 35%
    }

    return diskon * total_pembelian;
}

int main() {
    float total_pembelian, diskon, total_bayar;
    printf("Muhammad Devin Rahadi 23343076\n\n");

    // Input total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);

    // Menghitung diskon menggunakan fungsi potong()
    diskon = potong(total_pembelian);

    // Menghitung total bayar setelah diskon
    total_bayar = total_pembelian - diskon;

    // Menampilkan output
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", total_bayar);

    return 0;
}
