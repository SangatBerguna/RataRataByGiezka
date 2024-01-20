#include <stdio.h>
float menghitung_rata_rata(int array[], int panjang) {
    if (panjang == 0) {
        return -1;  // Mengembalikan -1 jika array kosong
    }
    int total = 0;
    for (int i = 0; i < panjang; i++) {
        total += array[i];
    }
    float rata_rata = (float)total / panjang;
    return rata_rata;
}
int main() {
    int nilai_array[] = {78, 82, 95, 86, 90};
    int panjang_array = sizeof(nilai_array) / sizeof(nilai_array[0]);
    float hasil_rata_rata = menghitung_rata_rata(nilai_array, panjang_array);
    if (hasil_rata_rata != -1) {
        printf("Rata-rata dari array { ");
        for (int i = 0; i < panjang_array; i++) {
            printf("%d", nilai_array[i]);
            if (i < panjang_array - 1) {
                printf(", ");
            }
        }
        printf(" } adalah: %.2f\n", hasil_rata_rata);
    } else {
        printf("Array kosong, tidak dapat menghitung rata-rata.\n");
    }
    return 0;
}
