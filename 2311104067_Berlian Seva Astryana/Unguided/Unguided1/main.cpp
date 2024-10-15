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
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

void inputMahasiswa(Mahasiswa &m) {
    cout << "Masukkan Nama: ";
    cin >> m.nama;
    cout << "Masukkan NIM: ";
    cin >> m.nim;
    cout << "Masukkan Nilai UTS: ";
    cin >> m.uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> m.uas;
    cout << "Masukkan Nilai Tugas: ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilMahasiswa(const Mahasiswa &m) {
    cout << "Nama: " << m.nama << endl;
    cout << "NIM: " << m.nim << endl;
    cout << "Nilai UTS: " << m.uts << endl;
    cout << "Nilai UAS: " << m.uas << endl;
    cout << "Nilai Tugas: " << m.tugas << endl;
    cout << fixed << setprecision(2);
    cout << "Nilai Akhir: " << m.nilaiAkhir << endl;
}

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;

    for (int i = 0; i < MAX_MAHASISWA; ++i) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << endl;
        inputMahasiswa(daftarMahasiswa[i]);
        jumlahMahasiswa++;

        char lagi;
        if (i < MAX_MAHASISWA - 1) {
            cout << "Apakah Anda ingin menambah data mahasiswa lagi? (y/n): ";
            cin >> lagi;
            if (lagi != 'y' && lagi != 'Y') {
                break;
            }
        }
    }

    cout << "\nData Mahasiswa yang telah dimasukkan:\n";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << ":" << endl;
        tampilMahasiswa(daftarMahasiswa[i]);
        cout << endl;
    }

    return 0;
}
