//create by muhammad devin rahadi 23343076
#include <stdio.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char npm[15];
    char nama[50];
    char tanggal_lahir[11];
    char alamat[100];
    char no_hp[15];
};

int main() {
	
	printf("MUHAMMADD DEVIN RAHADI 233430756\n\n");
	
    // Maksimum jumlah mahasiswa yang dapat disimpan
    const int max_mahasiswa = 100;

    // Array untuk menyimpan data mahasiswa
    struct Mahasiswa data_mahasiswa[max_mahasiswa];

    // Variabel untuk menyimpan jumlah mahasiswa yang telah dimasukkan
    int jumlah_mahasiswa = 0;

    char lanjut;

    // Loop untuk memasukkan data mahasiswa
    do {
        printf("NPM: ");
        scanf("%s", data_mahasiswa[jumlah_mahasiswa].npm);

        printf("NAMA: ");
        scanf("%s", data_mahasiswa[jumlah_mahasiswa].nama);

        printf("TGL LAHIR: ");
        scanf("%s", data_mahasiswa[jumlah_mahasiswa].tanggal_lahir);

        printf("ALAMAT: ");
        scanf("%s", data_mahasiswa[jumlah_mahasiswa].alamat);

        printf("HP: ");
        scanf("%s", data_mahasiswa[jumlah_mahasiswa].no_hp);

        jumlah_mahasiswa++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    // Menampilkan data mahasiswa yang telah dimasukkan
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("%s\t%s\t%s\t%s\t%s\n",
               data_mahasiswa[i].npm,
               data_mahasiswa[i].nama,
               data_mahasiswa[i].tanggal_lahir,
               data_mahasiswa[i].alamat,
               data_mahasiswa[i].no_hp);
    }

    return 0;
}
