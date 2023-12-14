#include <stdio.h>
#include <math.h>

int main() {
	char ulangi;
	printf("Muhamamd Devin Rahadi 23343076\n\n");
	
	do{
    char pilihan;

    printf("Kalkulator Luas Permukaan\n");
    printf("Pilihan:\n");
    printf("a) Luas Permukaan Bola\n");
    printf("b) Luas Permukaan Kubus\n");
    printf("c) Luas Permukaan Balok\n");
    printf("d) Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan); // Membaca karakter pilihan, spasi digunakan untuk menghindari karakter newline.

    switch (pilihan) {
        case 'a':
        case 'A':
            {
                double jari_jari, luas_bola;
                printf("Masukkan jari-jari bola: ");
                scanf("%lf", &jari_jari);
                luas_bola = 4 * M_PI * pow(jari_jari, 2);
                printf("Luas Permukaan Bola: %.2lf\n", luas_bola);
                break;
            }
        case 'b':
        case 'B':
            {
                double sisi, luas_kubus;
                printf("Masukkan panjang sisi kubus: ");
                scanf("%lf", &sisi);
                luas_kubus = 6 * pow(sisi, 2);
                printf("Luas Permukaan Kubus: %.2lf\n", luas_kubus);
                break;
            }
        case 'c':
        case 'C':
            {
                double panjang, lebar, tinggi, luas_balok;
                printf("Masukkan panjang, lebar, dan tinggi balok (pisahkan dengan spasi): ");
                scanf("%lf %lf %lf", &panjang, &lebar, &tinggi);
                luas_balok = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                printf("Luas Permukaan Balok: %.2lf\n", luas_balok);
                break;
            }
        case 'd':
        case 'D':
            {
                double jari_jari_tabung, tinggi_tabung, luas_tabung;
                printf("Masukkan jari-jari dan tinggi tabung (pisahkan dengan spasi): ");
                scanf("%lf %lf", &jari_jari_tabung, &tinggi_tabung);
                luas_tabung = 2 * M_PI * jari_jari_tabung * (jari_jari_tabung + tinggi_tabung);
                printf("Luas Permukaan Tabung: %.2lf\n", luas_tabung);
                break;
            }
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }
    printf("Ingin menggunakan kalkulator lagi? (y/n): ");
        scanf(" %c", &ulangi);
    } while (ulangi == 'y' || ulangi == 'Y');

    return 0;
}
