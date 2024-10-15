#include <iostream>
using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}
void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int *ptr1, *ptr2;

    cout << "Array 1 awal:" << endl;
    tampilkanArray(array1);

    cout << "Array 2 awal:" << endl;
    tampilkanArray(array2);

    // Menukar elemen pada posisi [1][1]
    tukarArray(array1, array2, 1, 1);

    cout << "Array 1 setelah pertukaran:" << endl;
    tampilkanArray(array1);

    cout << "Array 2 setelah pertukaran:" << endl;
    tampilkanArray(array2);

    // Inisialisasi pointer
    ptr1 = &array1[0][0];
    ptr2 = &array2[0][0];

    cout << "Nilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    // Menukar nilai yang ditunjuk pointer
    tukarPointer(ptr1, ptr2);

    cout << "Setelah pertukaran pointer:" << endl;
    cout << "Nilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    return 0;
}
