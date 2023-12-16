//create by muhamad devin rahadi 23343076
#include <stdio.h>

int main() {
    // Deklarasi array untuk menyimpan nilai mahasiswa
    float nilai[20];
    int i;

	printf("Create by Muhammad Devin Rahadi 23343076\n\n");
    // Mengisi nilai mahasiswa
    printf("Masukkan nilai dari 20 mahasiswa:\n");
    for (i = 0; i < 20; i++) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%f", &nilai[i]);
    }

    // Menghitung rata-rata
    float total = 0;
    for (i = 0; i < 20; i++) {
        total += nilai[i];
    }

    float rata_rata = total / 20;

    // Menampilkan rata-rata
    printf("Rata-rata nilai mahasiswa: %.2f\n", rata_rata);

    return 0;
}
