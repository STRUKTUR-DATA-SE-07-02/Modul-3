#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa {
    string nama;
    string nim;
    double uts, uas, tugas, nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(double uts, double uas, double tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (maksimal " << MAX_MAHASISWA << "): ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "Nama: ";
        cin.ignore(); // Membersihkan buffer input
        getline(cin, mahasiswa[i].nama);
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nilai UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "Nilai UAS: ";
        cin >> mahasiswa[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;

        // Hitung nilai akhir
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    cout << "\nData Mahasiswa:" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl << endl;
    }

    return 0;
}