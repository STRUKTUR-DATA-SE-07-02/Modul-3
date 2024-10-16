#include <iostream>

using namespace std;

void cetakArray(int arr[][3], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarElemen(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    cout << "Array 1:\n";
    cetakArray(arr1, 3, 3);

    cout << "\nArray 2:\n";
    cetakArray(arr2, 3, 3);

    // Tukar elemen pada posisi (1,1) dari kedua array
    int *ptr1 = &arr1[1][1]; // Menunjuk ke elemen pada baris 1, kolom 1 di arr1
    int *ptr2 = &arr2[1][1]; // Menunjuk ke elemen pada baris 1, kolom 1 di arr2
    tukarElemen(ptr1, ptr2);

    cout << "\nSetelah ditukar:\n";
    cout << "Array 1:\n";
    cetakArray(arr1, 3, 3);

    cout << "\nArray 2:\n";
    cetakArray(arr2, 3, 3);

    return 0;
}