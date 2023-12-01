// Tugas Muhammad Devin Rahadi 23343076
#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int nilai = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", nilai);
            nilai += i;
        }
        printf("\n");
    }

    return 0;
}
