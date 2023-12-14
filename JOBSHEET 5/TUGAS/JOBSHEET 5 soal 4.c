//tugas muhammad devin rahadi 23343076
#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan nilai kehadiran, tugas, UTS, dan UAS
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas;
    
    // Meminta input nilai-nilai dari pengguna
    printf("Muhammad Devin Rahadi 23343076\n\n");
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir berdasarkan bobot
    float nilai_akhir = (nilai_kehadiran * 0.20) + (nilai_tugas * 0.20) + (nilai_uts * 0.25) + (nilai_uas * 0.35);

    // Menampilkan nilai akhir
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    // Menentukan hasil kelulusan berdasarkan rentang nilai akhir
    if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan.\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 85) {
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        printf("Maaf, anda tidak lulus!\n");
    } else {
        printf("Nilai tidak valid, harap masukkan nilai antara 0 dan 100.\n");
    }

    return 0;
}
