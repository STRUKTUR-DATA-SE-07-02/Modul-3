#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukarkan isi dua array 2D pada posisi tertentu
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukarkan isi dua variabel yang ditunjuk oleh dua pointer
void tukarPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Dua array 2D berukuran 3x3
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Menampilkan isi array 1
    cout << "Isi Array 1:" << endl;
    tampilkanArray(array1);
    cout << endl;

    // Menampilkan isi array 2
    cout << "Isi Array 2:" << endl;
    tampilkanArray(array2);
    cout << endl;

    // Menukarkan elemen pada posisi (1, 1)
    tukarArray(array1, array2, 1, 1);

    // Menampilkan isi array setelah penukaran
    cout << "Setelah Tukar Elemen pada Posisi (1, 1):" << endl;
    cout << "Array 1:" << endl;
    tampilkanArray(array1);
    cout << "Array 2:" << endl;
    tampilkanArray(array2);
    cout << endl;

    // Dua pointer integer
    int a = 10, b = 20;
    int* pointer1 = &a;
    int* pointer2 = &b;

    // Menampilkan nilai sebelum penukaran
    cout << "Sebelum Tukar Pointer: a = " << *pointer1 << ", b = " << *pointer2 << endl;

    // Menukarkan nilai yang ditunjuk oleh ptrA dan ptrB
    tukarPointer(pointer1, pointer2);

    // Menampilkan nilai setelah penukaran
    cout << "Setelah Tukar Pointer: a = " << *pointer1 << ", b = " << *pointer2 << endl;

    return 0;
}