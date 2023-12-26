#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan biodata mahasiswa
struct Mahasiswa {
    char nama[50];
    char nim[15];
    char jurusan[30];
    char program_studi[50];
};

int main() {
    FILE *file;
    struct Mahasiswa mahasiswa;
    int jumlah_mahasiswa;

    // Buka file untuk penulisan
    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.");
        return 1;
    }

    // Input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);

    // Membersihkan buffer stdin
    while (getchar() != '\n');

    // Input biodata mahasiswa dan simpan ke dalam file
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("Masukkan data mahasiswa ke-%d\n", i + 1);
        
        printf("Nama: ");
        fgets(mahasiswa.nama, sizeof(mahasiswa.nama), stdin);
        mahasiswa.nama[strcspn(mahasiswa.nama, "\n")] = '\0';  // Menghapus newline character jika ada

        printf("NIM: ");
        fgets(mahasiswa.nim, sizeof(mahasiswa.nim), stdin);
        mahasiswa.nim[strcspn(mahasiswa.nim, "\n")] = '\0';

        printf("Jurusan: ");
        fgets(mahasiswa.jurusan, sizeof(mahasiswa.jurusan), stdin);
        mahasiswa.jurusan[strcspn(mahasiswa.jurusan, "\n")] = '\0';

        printf("Program Studi: ");
        fgets(mahasiswa.program_studi, sizeof(mahasiswa.program_studi), stdin);
        mahasiswa.program_studi[strcspn(mahasiswa.program_studi, "\n")] = '\0';

        // Menyimpan biodata ke dalam file
        fprintf(file, "Data Mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama: %s\n", mahasiswa.nama);
        fprintf(file, "NIM: %s\n", mahasiswa.nim);
        fprintf(file, "Jurusan: %s\n", mahasiswa.jurusan);
        fprintf(file, "Program Studi: %s\n", mahasiswa.program_studi);
        fprintf(file, "\n");
    }

    // Tutup file setelah selesai
    fclose(file);

    printf("Data mahasiswa telah disimpan dalam file datamahasiswa.txt.\n");

    return 0;
}
