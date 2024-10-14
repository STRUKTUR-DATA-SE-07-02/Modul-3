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

void tukarArrayPosisi(int arr1[3][3], int arr2[3][3], int x, int y) {
    int temp = arr1[x][y];
    arr1[x][y] = arr2[x][y];
    arr2[x][y] = temp;
}

void tukarPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int a = 10, b = 20;
    int *pA = &a;
    int *pB = &b;

    cout << "Array 1 sebelum ditukar:\n";
    tampilkanArray(array1);
    cout << "Array 2 sebelum ditukar:\n";
    tampilkanArray(array2);

    tukarArrayPosisi(array1, array2, 1, 1);

    cout << "Array 1 setelah ditukar:\n";
    tampilkanArray(array1);
    cout << "Array 2 setelah ditukar:\n";
    tampilkanArray(array2);

    cout << "Nilai sebelum pointer ditukar: a = " << a << ", b = " << b << endl;

    tukarPointer(pA, pB);

    cout << "Nilai setelah pointer ditukar: a = " << a << ", b = " << b << endl;

    return 0;
}
