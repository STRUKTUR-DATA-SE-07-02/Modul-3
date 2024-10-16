// UNGUIDED 1
struct mahasiswa {
    string nama;
    char nim[10];
    int nilaiUts, nilaiUas, nilaiTugas;
};

void inputMhs(mahasiswa &m);
float nilaiAkhir(mahasiswa m);

int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "Memperoleh milai akhir = " << nilaiAkhir(mhs);
    return 0;
}

void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nama;
    cout << "input nim = ";
    cin >> (m).nim;
    cout << "input nilai UTS = ";
    cin >> (m).nilaiUts;
    cout << "input nilai UAS = ";
    cin >> (m).nilaiUas;
    cout << "input nilai Tugas = ";
    cin >> (m).nilaiTugas;
}

float nilaiAkhir(mahasiswa m){
    return(0.3*m.nilaiUts+0.4*m.nilaiUas+0.3*m.nilaiTugas);
}




// UNGUIDED 2
/*
#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
*/



// UNGUIDED 3
/*
#include <iostream>
using namespace std;

void displayArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void swapArrayElements(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

void swapPointerValues(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
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

    // Dua buah pointer integer
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Menampilkan array sebelum penukaran
    cout << "Array 1 sebelum penukaran:\n";
    displayArray(array1);
    cout << "Array 2 sebelum penukaran:\n";
    displayArray(array2);

    // Menukar elemen pada posisi tertentu
    swapArrayElements(array1, array2, 1, 1);

    cout << "Array 1 setelah penukaran:\n";
    displayArray(array1);
    cout << "Array 2 setelah penukaran:\n";
    displayArray(array2);

    cout << "Nilai sebelum pointer ditukar: a = " << *ptr1 << ", b = " << *ptr2 << endl;

    swapPointerValues(ptr1, ptr2);

    cout << "Nilai setelah pointer ditukar: a = " << *ptr1 << ", b = " << *ptr2 << endl;

    return 0;
}
*/
