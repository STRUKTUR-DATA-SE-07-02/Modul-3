#include <iostream>

using namespace std;

// Fungsi untuk menampilkan isi array
void menampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukar nilai array
void menukarArray(int arr1[3][3], int arr2[3][3], int posisi1[2], int posisi2[2]) {
    int temp = arr1[posisi1[0]][posisi1[1]];
    arr1[posisi1[0]][posisi1[1]] = arr2[posisi2[0]][posisi2[1]]; 
    arr2[posisi2[0]][posisi2[1]] = temp; 
}

// Fungsi untuk menukar nilai pointer
void menukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2; 
    *ptr2 = temp; 
}

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    int var1 = 20;
    int var2 = 30;
    int* ptr1 = &var1;
    int* ptr2 = &var2;

    cout << "Isi Array 1 : " << endl;
    menampilkanArray(arr1);
    cout << "Isi Array 2 : " << endl;
    menampilkanArray(arr2);
    cout << "" << endl;

    int posisi1[2] = {1,1};
    int posisi2[2] = {2,2};
    menukarArray(arr1, arr2, posisi1, posisi2);

    cout << "Isi Nilai Array 1 Setelah Ditukar:" << endl;
    menampilkanArray(arr1);
    cout << "Isi Nilai Array 2 Setelah Ditukar:" << endl;
    menampilkanArray(arr2);
    cout << "*" << endl;

    menukarPointer(ptr1, ptr2);

    cout << "Isi Nilai Variabel 1 Setelah Ditukar: " << *ptr1 << endl;
    cout << "Isi Nilai Variabel 2 Setelah Ditukar: " << *ptr2 << endl;
    cout << "*" << endl;

    return 0;
}