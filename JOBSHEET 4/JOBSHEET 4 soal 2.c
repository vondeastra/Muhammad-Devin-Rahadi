//Tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

//masukkan fungsi
int main() {
	//deklarasi variabel
    char namaPembeli[50];
    char namaBarang[50];
    float hargaBarang, hargaTotal;
    int jumlahBarang;

    // Meminta input nama pembeli
    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    // Meminta input nama barang
    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    // Meminta input harga barang satuan
    printf("Masukkan harga barang satuan: ");
    scanf("%f", &hargaBarang);

    // Meminta input jumlah barang yang dibeli
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    // Menghitung harga total menggunakan operator
    hargaTotal = hargaBarang * jumlahBarang;

    // Menampilkan informasi transaksi
    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Barang Satuan: %.2f\n", hargaBarang);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Harga Total: %.2f\n", hargaTotal);
    printf("\nBarang yang dibeli tidak dapat\ndikembalikan kecuali ada perjanjian");
    printf("\n============================");

    return 0;
}
