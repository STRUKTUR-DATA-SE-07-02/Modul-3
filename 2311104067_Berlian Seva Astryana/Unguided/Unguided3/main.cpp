#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int posisi[2]) {
    int temp = arr1[posisi[0]][posisi[1]];
    arr1[posisi[0]][posisi[1]] = arr2[posisi[0]][posisi[1]];
    arr2[posisi[0]][posisi[1]] = temp;
}

void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    int var1 = 20;
    int var2 = 30;
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    cout << "Isi array 1:" << endl;
    tampilkanArray(arr1);
    cout << "Isi array 2:" << endl;
    tampilkanArray(arr2);

    int posisi[2] = {1, 1};
    tukarArray(arr1, arr2, posisi);

    cout << "Isi array 1 setelah ditukar:" << endl;
    tampilkanArray(arr1);
    cout << "Isi array 2 setelah ditukar:" << endl;
    tampilkanArray(arr2);

    tukarPointer(ptr1, ptr2);

    cout << "Isi var1 setelah ditukar: " << *ptr1 << endl;
    cout << "Isi var2 setelah ditukar: " << *ptr2 << endl;

    return 0;
}
