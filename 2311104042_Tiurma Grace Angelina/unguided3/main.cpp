#include <iostream>
using namespace std;

void cetak_array(int matriks[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

void tukar_elemen_array(int matriks1[3][3], int matriks2[3][3], int baris, int kolom) {
    int sementara = matriks1[baris][kolom];
    matriks1[baris][kolom] = matriks2[baris][kolom];
    matriks2[baris][kolom] = sementara;
}

void tukar_nilai_pointer(int* penunjuk1, int* penunjuk2) {
    int sementara = *penunjuk1;
    *penunjuk1 = *penunjuk2;
    *penunjuk2 = sementara;
}

int main() {
    int matriks1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int matriks2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    int angka1 = 15, angka2 = 25;
    int* penunjuk1 = &angka1;
    int* penunjuk2 = &angka2;

    cout << "Isi matriks1 sebelum pertukaran:" << endl;
    cetak_array(matriks1);

    cout << "Isi matriks2 sebelum pertukaran:" << endl;
    cetak_array(matriks2);

    tukar_elemen_array(matriks1, matriks2, 1, 1);

    cout << "\nIsi matriks1 setelah pertukaran pada posisi [1][1]:" << endl;
    cetak_array(matriks1);

    cout << "Isi matriks2 setelah pertukaran pada posisi [1][1]:" << endl;
    cetak_array(matriks2);

    cout << "\nNilai sebelum pertukaran pointer:" << endl;
    cout << "angka1 = " << angka1 << ", angka2 = " << angka2 << endl;

    tukar_nilai_pointer(penunjuk1, penunjuk2);


    cout << "Nilai setelah pertukaran pointer:" << endl;
    cout << "angka1 = " << angka1 << ", angka2 = " << angka2 << endl;

    return 0;
}


