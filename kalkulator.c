#include <stdio.h>

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol!\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int angka1, angka2, pilihan;
    printf("=== Kalkulator Sederhana ===\n");
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    printf("\nPilih Operasi:\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");
    printf("Pilihan Anda: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Hasil: %d\n", tambah(angka1, angka2));
            break;
        case 2:
            printf("Hasil: %d\n", kurang(angka1, angka2));
            break;
        case 3:
            printf("Hasil: %d\n", kali(angka1, angka2));
            break;
        case 4:
            printf("Hasil: %.2f\n", bagi(angka1, angka2));
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
