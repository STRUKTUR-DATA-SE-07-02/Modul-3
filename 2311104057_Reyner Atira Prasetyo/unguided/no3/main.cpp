#include <iostream>
#include "fungsi.h"
#include "fungsi.cpp"

using namespace std;

int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int a = 10, b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "Array 1 sebelum tukar: " << endl;
    tampilArray(array1);
    
    cout << "Array 2 sebelum tukar: " << endl;
    tampilArray(array2);

    int row = 1, col = 1;
    tukarIsiArray(array1, array2, row, col);

    cout << "Array 1 setelah tukar posisi (" << row << "," << col << "):" << endl;
    tampilArray(array1);
    
    cout << "Array 2 setelah tukar posisi (" << row << "," << col << "):" << endl;
    tampilArray(array2);

    cout << "Nilai sebelum tukar pointer:" << endl;
    cout << "Pointer 1 (nilai a): " << *ptr1 << endl;
    cout << "Pointer 2 (nilai b): " << *ptr2 << endl;

    tukarIsiPointer(ptr1, ptr2);

    cout << "Nilai setelah tukar pointer:" << endl;
    cout << "Pointer 1 (nilai a): " << *ptr1 << endl;
    cout << "Pointer 2 (nilai b): " << *ptr2 << endl;

    return 0;
}