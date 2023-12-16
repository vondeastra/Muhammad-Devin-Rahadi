#include <stdio.h>

struct ATM {
    char no_rek[10];
    char nama_akun[100];
    int saldo;
};

void cek_saldo(struct ATM *account) {
    printf("Saldo saat ini: Rp. %d\n", account->saldo);
}

void setoran(struct ATM *account) {
    int jumlah;
    printf("Masukkan jumlah setoran: Rp. ");
    scanf("%d", &jumlah);

    account->saldo += jumlah;
    printf("Setoran berhasil. Saldo saat ini: Rp. %d\n", account->saldo);
}

void penarikan(struct ATM *account) {
    int jumlah;
    printf("Masukkan jumlah penarikan: Rp. ");
    scanf("%d", &jumlah);

    if (account->saldo - jumlah >= 50000) {
        account->saldo -= jumlah;
        printf("Penarikan berhasil. Saldo saat ini: Rp. %d\n", account->saldo);
    } else {
        printf("Saldo tidak mencukupi untuk penarikan.\n");
    }
}

int main() {
    struct ATM hattori_atm = {"0123", "Hattori", 175000};
    int pilihan;
    
    printf("Muhammad Devin Rahadi 23343076\n\n");

    do {
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                cek_saldo(&hattori_atm);
                break;
            case 2:
                setoran(&hattori_atm);
                break;
            case 3:
                penarikan(&hattori_atm);
                break;
            case 4:
                printf("Terima kasih. Sampai jumpa lagi!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n");
                break;
        }

    } while (pilihan != 4);

    return 0;
}
