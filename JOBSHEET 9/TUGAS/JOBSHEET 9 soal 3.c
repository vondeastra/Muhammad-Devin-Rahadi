//create by muhammad devin rahadi 23343076
#include <stdio.h>

int main() {
    printf("Muhammad Devin Rahadi 23343076\n\n");

    // Program A
    int LesleyA = 57082;
    int LaylaA = LesleyA;
    int BalmondA = LaylaA + 1;

    // Menjawab pertanyaan Program A
    printf("Program A:\n");
    printf("Lesley = %d\n", LesleyA);
    printf("Layla = Lesley\n");
    printf("Balmond = Layla + 1\n");
    printf("a) Nilai Layla: %d\n", LaylaA);
    printf("b) Nilai Balmond: %d\n\n", BalmondA);

    // Program B
    int Lesley = 57082;
    int* Layla = &Lesley;
    int Balmond = *Layla + 1;

    // Menjawab pertanyaan
    printf("B. Lesley = 57082\n");
    printf("Layla = &Lesley\n");
    printf("Balmond = *Layla + 1\n");

    // Menampilkan hasil
    printf("a) Nilai Layla: %d\n", Layla);
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;


}
