#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukar elemen pada posisi tertentu antara dua array 2D
void tukarElemenArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

// Fungsi untuk menukar isi dari variabel yang ditunjuk oleh dua pointer
void tukarIsiPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Inisialisasi dua array 2D 3x3
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Inisialisasi dua pointer integer
    int a = 10;
    int b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "Isi Array 1 sebelum ditukar:" << endl;
    tampilkanArray(array1);
    cout << "Isi Array 2 sebelum ditukar:" << endl;
    tampilkanArray(array2);

    // Menukar elemen pada posisi (1, 1) (baris 1, kolom 1)
    tukarElemenArray(array1, array2, 1, 1);

    cout << "\nIsi Array 1 setelah menukar elemen di posisi (1,1):" << endl;
    tampilkanArray(array1);
    cout << "Isi Array 2 setelah menukar elemen di posisi (1,1):" << endl;
    tampilkanArray(array2);

    // Menampilkan nilai sebelum penukaran pointer
    cout << "\nNilai sebelum penukaran pointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Menukar isi dari variabel yang ditunjuk oleh ptr1 dan ptr2
    tukarIsiPointer(ptr1, ptr2);

    // Menampilkan nilai setelah penukaran pointer
    cout << "\nNilai setelah penukaran pointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
