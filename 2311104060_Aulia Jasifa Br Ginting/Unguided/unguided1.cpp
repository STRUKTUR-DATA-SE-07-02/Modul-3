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

void inputDataMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, mhs.nama);
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

void tampilkanDataMahasiswa(const Mahasiswa &mhs) {
    cout << setw(20) << left << mhs.nama;
    cout << setw(15) << left << mhs.nim;
    cout << setw(10) << left << mhs.uts;
    cout << setw(10) << left << mhs.uas;
    cout << setw(10) << left << mhs.tugas;
    cout << setw(10) << left << fixed << setprecision(2) << mhs.nilai_akhir << endl;
}

int main() {
    Mahasiswa daftarMahasiswa[10];
    int jumlahMahasiswa = 0;
    char pilihan;

    do {
        if (jumlahMahasiswa < 10) {
            cout << "\nMasukkan data mahasiswa ke-" << jumlahMahasiswa + 1 << endl;
            inputDataMahasiswa(daftarMahasiswa[jumlahMahasiswa]);
            jumlahMahasiswa++;
        } else {
            cout << "Jumlah maksimum mahasiswa (10) telah tercapai." << endl;
            break;
        }

        cout << "Apakah Anda ingin memasukkan data mahasiswa lagi? (y/n): ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "\nDaftar Mahasiswa:\n";
    cout << setw(20) << left << "Nama";
    cout << setw(15) << left << "NIM";
    cout << setw(10) << left << "UTS";
    cout << setw(10) << left << "UAS";
    cout << setw(10) << left << "Tugas";
    cout << setw(10) << left << "Nilai Akhir" << endl;
    cout << string(75, '-') << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        tampilkanDataMahasiswa(daftarMahasiswa[i]);
    }

    return 0;
}