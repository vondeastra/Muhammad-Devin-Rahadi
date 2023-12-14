// Tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

int main() {
	char ulangi;
	printf("Muhammad Devin Rahadi 23343076\n\n");
	
	do{
    char operator;
    double bilangan1, bilangan2;

    printf("Kalkulator Sederhana\n");
    printf("Pilih operasi:\n");
    printf("a) Penjumlahan (+)\n");
    printf("b) Pengurangan (-)\n");
    printf("c) Perkalian (*)\n");
    printf("d) Pembagian (/)\n");
    printf("e) Hasil Bagi (%%)\n");
    printf("Pilihan: ");
    scanf(" %c", &operator); // Membaca karakter operator, perlu ada spasi di depan %c untuk menghindari karakter newline.

    printf("Masukkan bilangan pertama : ");
    scanf("%lf", &bilangan1);
    printf("Masukkan bilangan kedua : ");
    scanf("%lf", &bilangan2);
    
    switch (operator) {
        case 'a':
            printf("Hasil: %.2lf + %.2lf = %.2lf\n", bilangan1, bilangan2, bilangan1 + bilangan2);
            break;
        case 'b':
            printf("Hasil: %.2lf - %.2lf = %.2lf\n", bilangan1, bilangan2, bilangan1 - bilangan2);
            break;
        case 'c':
            printf("Hasil: %.2lf * %.2lf = %.2lf\n", bilangan1, bilangan2, bilangan1 * bilangan2);
            break;
        case 'd':
            if (bilangan2 != 0) {
                printf("Hasil: %.2lf / %.2lf = %.2lf\n", bilangan1, bilangan2, bilangan1 / bilangan2);
            } else {
                printf("Pembagian oleh nol tidak diizinkan.\n");
            }
            break;
        case 'e':
            if (bilangan2 != 0) {
                printf("Hasil Bagi: %.2lf %% %.2lf = %.2lf\n", bilangan1, bilangan2, (int)bilangan1 % (int)bilangan2);
            } else {
                printf("Pembagian oleh nol tidak diizinkan.\n");
            }
            break;
        default:
            printf("Operasi tidak valid.\n");
            break;
    } 
    printf("Ingin menggunakan kalkulator lagi? (y/n): ");
        scanf(" %c", &ulangi);
    } while (ulangi == 'y' || ulangi == 'Y');
    
    return 0;
}
