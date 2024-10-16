#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}
void inputMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan Nama: ";
    getline(cin >> ws, mhs.nama);
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan nilai UTS: ";
    cin >> mhs.uts;
    cout << "Masukkan nilai UAS: ";
    cin >> mhs.uas;
    cout << "Masukkan nilai Tugas: ";
    cin >> mhs.tugas;
    mhs.nilai_akhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}
void tampilkanMahasiswa(const Mahasiswa &mhs) {
    cout << setw(20) << left << mhs.nama
         << setw(15) << mhs.nim
         << setw(10) << mhs.uts
         << setw(10) << mhs.uas
         << setw(10) << mhs.tugas
         << setw(10) << fixed << setprecision(2) << mhs.nilai_akhir << endl;
}
int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;

    while (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "\nMasukkan data mahasiswa ke-" << jumlahMahasiswa + 1 << ":\n";
        inputMahasiswa(daftarMahasiswa[jumlahMahasiswa]);
        jumlahMahasiswa++;

        char lanjut;
        cout << "Tambah data mahasiswa lagi? (y/n): ";
        cin >> lanjut;
        if (lanjut != 'y' && lanjut != 'Y') break;
    }

    cout << "\nDaftar Mahasiswa:\n";
    cout << setw(20) << left << "Nama"
         << setw(15) << "NIM"
         << setw(10) << "UTS"
         << setw(10) << "UAS"
         << setw(10) << "Tugas"
         << setw(10) << "Nilai Akhir" << endl;
    cout << string(75, '-') << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        tampilkanMahasiswa(daftarMahasiswa[i]);
    }
    return 0;
}
