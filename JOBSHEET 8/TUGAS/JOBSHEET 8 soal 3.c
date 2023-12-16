//create muhammad devin rahadi 23343076
#include <stdio.h>

// Fungsi untuk menghitung luas lingkaran
float luas(float radius) {
    const float PI = 3.14159; // Nilai konstanta p
    return PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius) {
    const float PI = 3.14159; // Nilai konstanta p
    return 2 * PI * radius;
}

int main() {
    float radius;
    printf("tugas muhammad devin rahadi 23343076\n\n");

    // Input radius dari pengguna
    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    float hasilLuas = luas(radius);
    float hasilKeliling = keliling(radius);

    // Menampilkan hasil
    printf("Luas lingkaran: %.2f\n", hasilLuas);
    printf("Keliling lingkaran: %.2f\n", hasilKeliling);

    return 0;
}
