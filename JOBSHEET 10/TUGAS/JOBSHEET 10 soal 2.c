//create by muhammad devin rahadi 233443076
#include <stdio.h>

// Enum untuk menyimpan nama zodiak
enum Zodiak {
    ARIES,
    TAURUS,
    GEMINI,
    CANCER,
    LEO,
    VIRGO,
    LIBRA,
    SCORPIO,
    SAGITTARIUS,
    CAPRICORN,
    AQUARIUS,
    PISCES
};

// Struktur untuk menyimpan batas tanggal lahir zodiak
struct BatasTanggal {
    int start_day;
    int start_month;
    int end_day;
    int end_month;
};

// Array untuk menyimpan batas tanggal lahir setiap zodiak
struct BatasTanggal batasZodiak[] = {
    {21, 3, 19, 4},  // ARIES
    {20, 4, 20, 5},  // TAURUS
    {21, 5, 20, 6},  // GEMINI
    {21, 6, 22, 7},  // CANCER
    {23, 7, 22, 8},  // LEO
    {23, 8, 22, 9},  // VIRGO
    {23, 9, 22, 10}, // LIBRA
    {23, 10, 21, 11},// SCORPIO
    {22, 11, 21, 12},// SAGITTARIUS
    {22, 12, 19, 1}, // CAPRICORN
    {20, 1, 18, 2},  // AQUARIUS
    {19, 2, 20, 3}   // PISCES
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
enum Zodiak tentukanZodiak(int day, int month) {
    for (int i = 0; i < sizeof(batasZodiak) / sizeof(batasZodiak[0]); i++) {
        if ((month == batasZodiak[i].start_month && day >= batasZodiak[i].start_day) ||
            (month == batasZodiak[i].end_month && day <= batasZodiak[i].end_day)) {
            return (enum Zodiak)i;
        }
    }
    return PISCES; // Default jika tidak ada zodiak yang cocok
}

int main() {
    
    printf("MUHAMMAD DEVIN RAHADI 23343076\n\n");
    // Input tanggal lahir
    int day, month, year;
    printf("Masukkan Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &day, &month, &year);

    // Menentukan zodiak
    enum Zodiak zodiak = tentukanZodiak(day, month);

    // Output hasil
    printf("Zodiak Anda adalah: ");
    switch (zodiak) {
        case ARIES: printf("ARIES"); break;
        case TAURUS: printf("TAURUS"); break;
        case GEMINI: printf("GEMINI"); break;
        case CANCER: printf("CANCER"); break;
        case LEO: printf("LEO"); break;
        case VIRGO: printf("VIRGO"); break;
        case LIBRA: printf("LIBRA"); break;
        case SCORPIO: printf("SCORPIO"); break;
        case SAGITTARIUS: printf("SAGITTARIUS"); break;
        case CAPRICORN: printf("CAPRICORN"); break;
        case AQUARIUS: printf("AQUARIUS"); break;
        case PISCES: printf("PISCES"); break;
        default: printf("Zodiak tidak ditemukan");
    }

    printf("\n");

    return 0;
}
