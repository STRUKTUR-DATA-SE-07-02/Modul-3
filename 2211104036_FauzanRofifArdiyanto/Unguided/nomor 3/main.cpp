#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void printArray(int arr[3][3], const string &name)
{
    cout << "Isi " << name << ":\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukar elemen pada posisi tertentu antara dua array
void swapElements(int arr1[3][3], int arr2[3][3], int row, int col)
{
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

// Fungsi untuk menukar isi dari dua pointer
void swapPointers(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    // Deklarasi 2 buah array 2D integer berukuran 3x3
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Deklarasi 2 buah pointer integer
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Tampilkan isi awal dari kedua array
    printArray(arr1, "arr1");
    printArray(arr2, "arr2");

    // Tukar elemen di posisi tertentu (contoh: tukar elemen [1][1])
    cout << "\nMenukar elemen pada posisi [1][1] antara arr1 dan arr2...\n";
    swapElements(arr1, arr2, 1, 1);

    // Tampilkan isi setelah pertukaran
    printArray(arr1, "arr1");
    printArray(arr2, "arr2");

    // Tampilkan nilai sebelum menukar pointer
    cout << "\nSebelum swapPointers:\n";
    cout << "a = " << a << ", b = " << b << endl;

    // Tukar isi dari variabel yang ditunjuk oleh pointer
    swapPointers(ptr1, ptr2);

    // Tampilkan nilai setelah menukar pointer
    cout << "\nSetelah swapPointers:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}