#include <iostream>

using namespace std;

void tampil_array(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukar_array(int arr1[3][3], int arr2[3][3], int x, int y) {
    if (x < 0 || x >= 3 || y < 0 || y >= 3) {
        cout << "Posisi error." << endl;
        return;
    }
    int temp = arr1[x][y];
    arr1[x][y] = arr2[x][y];
    arr2[x][y] = temp;
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

    int *ptr1 = &array1[0][0];
    int *ptr2 = &array2[0][0];

    cout << "Array 1:" << endl;
    tampil_array(array1);
    
    cout << "Array 2:" << endl;
    tampil_array(array2);

    tukar_array(array1, array2, 1, 1);

    cout << "\nSetelah menukar elemen pada posisi (1, 1):" << endl;
    cout << "Array 1:" << endl;
    tampil_array(array1);
    
    cout << "Array 2:" << endl;
    tampil_array(array2);

    return 0;
}
