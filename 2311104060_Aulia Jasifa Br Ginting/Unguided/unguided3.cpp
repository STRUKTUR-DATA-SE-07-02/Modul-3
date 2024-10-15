#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray(int arr[3][3], const string& namaArray) {
    cout << "Isi " << namaArray << ":" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

// Fungsi untuk menukar isi dari 2 array 2D pada posisi tertentu
void tukarElemen(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukar isi dari variabel yang ditunjuk oleh 2 buah pointer
void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Inisialisasi 2 buah array 2D integer berukuran 3x3
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    // Inisialisasi 2 buah pointer integer
    int nilai1 = 100, nilai2 = 200;
    int *ptr1 = &nilai1, *ptr2 = &nilai2;

    // Menampilkan isi awal array
    tampilkanArray(array1, "Array 1");
    tampilkanArray(array2, "Array 2");

    // Menukar elemen pada posisi (1,1) antara array1 dan array2
    cout << "Menukar elemen pada posisi (1,1) antara Array 1 dan Array 2" << endl;
    tukarElemen(array1, array2, 1, 1);

    // Menampilkan isi array setelah penukaran
    tampilkanArray(array1, "Array 1 setelah penukaran");
    tampilkanArray(array2, "Array 2 setelah penukaran");

    // Menampilkan nilai yang ditunjuk oleh pointer sebelum penukaran
    cout << "Nilai yang ditunjuk pointer sebelum penukaran:" << endl;
    cout << "ptr1: " << *ptr1 << endl;
    cout << "ptr2: " << *ptr2 << endl << endl;

    // Menukar nilai yang ditunjuk oleh pointer
    cout << "Menukar nilai yang ditunjuk oleh pointer" << endl;
    tukarPointer(ptr1, ptr2);

    // Menampilkan nilai yang ditunjuk oleh pointer setelah penukaran
    cout << "Nilai yang ditunjuk pointer setelah penukaran:" << endl;
    cout << "ptr1: " << *ptr1 << endl;
    cout << "ptr2: " << *ptr2 << endl;

    return 0;
}