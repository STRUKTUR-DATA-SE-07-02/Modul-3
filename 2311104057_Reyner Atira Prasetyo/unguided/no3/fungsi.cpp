#include <iostream>
#include "fungsi.h"

using namespace std;

void tampilArray(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr [i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarIsiArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

void tukarIsiPointer(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}