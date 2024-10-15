#include <iostream>

using namespace std;

// Fungsi untuk menampilkan isi array 2D
void displayArray(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukarkan isi dari dua array 2D pada posisi tertentu
void swapArrayElements(int arr1[3][3], int arr2[3][3], int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3) {
        int temp = arr1[row][col];
        arr1[row][col] = arr2[row][col];
        arr2[row][col] = temp;
    } else {
        cout << "Indeks di luar batas!" << endl;
    }
}

// Fungsi untuk menukarkan isi dari variabel yang ditunjuk oleh dua pointer
void swapPointers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Inisialisasi dua buah array 2D
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Menampilkan isi kedua array
    cout << "Array 1:" << endl;
    displayArray(array1);
    
    cout << "Array 2:" << endl;
    displayArray(array2);

    // Menukarkan elemen pada posisi tertentu (contoh: baris 1 kolom 1)
    swapArrayElements(array1, array2, 1, 1);
    
    cout << "Setelah tukar elemen (baris 1 kolom 1):" << endl;
    
    cout << "Array 1:" << endl;
    displayArray(array1);
    
    cout << "Array 2:" << endl;
    displayArray(array2);

    // Inisialisasi dua pointer integer
    int a = 10;
    int b = 20;
    
    int* ptrA = &a;
    int* ptrB = &b;

    // Menampilkan nilai sebelum tukar
    cout << "Sebelum tukar pointer: a = " << *ptrA << ", b = " << *ptrB << endl;

    // Menukarkan nilai yang ditunjuk oleh kedua pointer
    swapPointers(ptrA, ptrB);

    // Menampilkan nilai setelah tukar
    cout << "Setelah tukar pointer: a = " << *ptrA << ", b = " << *ptrB << endl;

    return 0;
}