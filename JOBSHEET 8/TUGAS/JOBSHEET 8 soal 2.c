//create by muhammad devin rahadi 23343076
#include <stdio.h>

// Fungsi untuk penjumlahan
float penjumlahan(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float pengurangan(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float perkalian(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float pembagian(float a, float b) {
    // Memastikan tidak terjadi pembagian oleh nol
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian oleh nol tidak diizinkan.\n");
        return 0; // Nilai default jika terjadi error
    }
}

int main() {
    float angka1, angka2;
    printf("tugas muhammad devin rahadi 23343076\n\n");

    // Input dua angka dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    // Menampilkan hasil operasi aritmetik
    printf("Penjumlahan: %.2f\n", penjumlahan(angka1, angka2));
    printf("Pengurangan: %.2f\n", pengurangan(angka1, angka2));
    printf("Perkalian: %.2f\n", perkalian(angka1, angka2));
    printf("Pembagian: %.2f\n", pembagian(angka1, angka2));

    return 0;
}
