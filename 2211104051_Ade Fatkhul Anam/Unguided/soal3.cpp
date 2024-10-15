
#include <iostream>
using namespace std;

void tampilArray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int array1[3][3], int array2[3][3], int baris, int kolom) {
    if (baris < 3 && kolom < 3) {
        int temp = array1[baris][kolom];
        array1[baris][kolom] = array2[baris][kolom];
        array2[baris][kolom] = temp;
    } else {
        cout << "Indeks baris atau kolom di luar batas!" << endl;
    }
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;

    cout << "Array 1 sebelum pertukaran: " << endl;
    tampilArray(array1);
    cout << "Array 2 sebelum pertukaran: " << endl;
    tampilArray(array2);

    tukarArray(array1, array2, 1, 1);

    cout << "\nArray 1 setelah pertukaran pada posisi (1,1): " << endl;
    tampilArray(array1);
    cout << "Array 2 setelah pertukaran pada posisi (1,1): " << endl;
    tampilArray(array2);

    cout << "\nNilai p1 dan p2 sebelum pertukaran: " << endl;
    cout << "p1: " << *p1 << " p2: " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\nNilai p1 dan p2 setelah pertukaran: " << endl;
    cout << "p1: " << *p1 << " p2: " << *p2 << endl;

    return 0;
}
