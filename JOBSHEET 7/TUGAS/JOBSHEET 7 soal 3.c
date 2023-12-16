#include <stdio.h>
#include <string.h>

int main() {
	printf("Create by Muhammad Devin Rahadi 23343076\n\n");
    // Username dan Password yang benar
    char username[] = "vondeastra";
    char password[] = "akugantengbanget123";

    // Variabel untuk menyimpan input pengguna
    char inputUsername[50];
    char inputPassword[50];

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", inputUsername);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    // Memeriksa apakah username dan password sesuai
    if (strcmp(username, inputUsername) == 0 && strcmp(password, inputPassword) == 0) {
        printf("Berhasil Login\n");
    } else {
        printf("Password Salah\n");
    }

    return 0;
}
