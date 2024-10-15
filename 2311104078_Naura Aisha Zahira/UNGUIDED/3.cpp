#include <iostream>

using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukarkan dua nilai array pada posisi tertentu
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukarkan isi variabel yang ditunjuk oleh dua pointer
void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Deklarasi 2 buah array 2D berukuran 3x3
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    
    // Deklarasi 2 pointer integer
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Menampilkan isi array sebelum ditukar
    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(arr1);
    cout << "Array 2 sebelum ditukar:" << endl;
    tampilArray(arr2);

    // Menukarkan isi array di posisi tertentu
    tukarArray(arr1, arr2, 1, 1); // Tukar elemen di baris 1, kolom 1

    // Menampilkan isi array setelah ditukar
    cout << "\nArray 1 setelah ditukar:" << endl;
    tampilArray(arr1);
    cout << "Array 2 setelah ditukar:" << endl;
    tampilArray(arr2);

    // Menampilkan nilai pointer sebelum ditukar
    cout << "\nNilai sebelum pointer ditukar:" << endl;
    cout << "Nilai ptr1 (a): " << *ptr1 << endl;
    cout << "Nilai ptr2 (b): " << *ptr2 << endl;

    // Menukarkan isi dari variabel yang ditunjuk oleh pointer
    tukarPointer(ptr1, ptr2);

    // Menampilkan nilai pointer setelah ditukar
    cout << "\nNilai setelah pointer ditukar:" << endl;
    cout << "Nilai ptr1 (a): " << *ptr1 << endl;
    cout << "Nilai ptr2 (b): " << *ptr2 << endl;

    return 0;
}
