//create by muhammad devin rahadi 23343076
#include <stdio.h>

// Fungsi rekursif untuk menghitung hasil perkalian
int perkalian(int a, int b) {
    // Basis: jika salah satu bilangan adalah 0, hasil perkalian adalah 0
    if (a == 0 || b == 0) {
        return 0;
    }
    // Rekurens: a * b = a + a * (b-1)
    return a + perkalian(a, b - 1);
}

// Fungsi untuk menampilkan metode perkalian melalui penjumlahan bilangan pertama
void Metode(int a, int b) {
    printf("Metode perkalian %d x %d adalah:\n", a, b);

    for (int i = 1; i <= b; ++i) {
        if (i < b) {
            printf("%d + ", a);
        } else {
            printf("%d = %d\n", a, perkalian(a, b));
        }
    }
}

int main() {
	printf("muhammad devin rahadi 23343076\n\n");
    // Input bilangan pertama
    int bilangan1;
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);

    // Input bilangan kedua
    int bilangan2;
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    // Memanggil fungsi untuk menampilkan metode perkalian melalui bilangan pertama
    Metode(bilangan1, bilangan2);

    return 0;
}
