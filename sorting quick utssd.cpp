#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen
void tukar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Fungsi untuk membagi array dan menemukan indeks pivot
int partisi(int arr[], int rendah, int tinggi) {
    int pivot = arr[tinggi]; // Memilih elemen terakhir sebagai pivot
    int i = (rendah - 1); // Indeks elemen yang lebih kecil

    for (int j = rendah; j <= tinggi - 1; j++) {
        // Jika elemen saat ini lebih kecil dari atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Tambahkan indeks elemen yang lebih kecil
            tukar(&arr[i], &arr[j]); // Tukar elemen
        }
    }
    tukar(&arr[i + 1], &arr[tinggi]); 
    // Tukar elemen pivot dengan elemen setelah elemen yang lebih kecil
    return (i + 1); // Kembalikan indeks pivot
}

// Fungsi utama untuk mengimplementasikan Quick Sort
void quickSort(int arr[], int rendah, int tinggi) {
    if (rendah < tinggi) {
        int pi = partisi(arr, rendah, tinggi); // Pi adalah indeks partisi

        // Secara rekursif mengurutkan elemen sebelum partisi dan setelah partisi
        quickSort(arr, rendah, pi - 1);
        quickSort(arr, pi + 1, tinggi);
    }
}

// Fungsi untuk mencetak array
void cetakArray(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array sebelum diurutkan: ";
    cetakArray(arr, n);
    quickSort(arr, 0, n - 1);
    cout << "Array setelah diurutkan: ";
    cetakArray(arr, n);
    return 0;
}

