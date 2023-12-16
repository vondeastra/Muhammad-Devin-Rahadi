//create by muhammad devin rahadi 23343076
#include <stdio.h>

void tampilkanTerbalik(const char *kalimat) {
    // Menghitung panjang kalimat
    int panjang = 0;
    while (kalimat[panjang] != '\0') {
        ++panjang;
    }

    printf("Kalimat Masukan : %s\n", kalimat);
    printf("Kebalikannya    : ");

    // Menampilkan kalimat terbalik
    for (int i = panjang - 1; i >= 0; --i) {
        printf("%c", kalimat[i]);
    }

    printf("\n");
}

int main() {
    char kalimat[100];

    // Input kalimat dari pengguna
    printf("muhammad devin rahadi 23343076\n\n");
    printf("Masukkan kalimat: ");
    scanf("%s", kalimat);

    // Menampilkan kalimat terbalik
    tampilkanTerbalik(kalimat);

    return 0;
}
