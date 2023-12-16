//create by muhammad devin rahadi
#include <stdio.h>

int main() {
    int jumlahMahasiswa;
    
    printf("Create by Muhammad Devin Rahadi 23343076\n\n");
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    char namaMahasiswa[jumlahMahasiswa][50];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    printf("\nNama-nama mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
