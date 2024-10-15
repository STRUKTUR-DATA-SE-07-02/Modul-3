#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

// Fungsi untuk menginput data mahasiswa
void inputMahasiswa(Mahasiswa& m) {
    cout << "Nama: ";
    cin.ignore();
    getline(cin, m.nama);
    cout << "NIM: ";
    cin >> m.nim;
    cout << "Nilai UTS: ";
    cin >> m.uts;
    cout << "Nilai UAS: ";
    cin >> m.uas;
    cout << "Nilai Tugas: ";
    cin >> m.tugas;
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa& m) {
    cout << "Nama: " << m.nama << endl;
    cout << "NIM: " << m.nim << endl;
    cout << "Nilai UTS: " << m.uts << endl;
    cout << "Nilai UAS: " << m.uas << endl;
    cout << "Nilai Tugas: " << m.tugas << endl;
    cout << "Nilai Akhir: " << m.nilaiAkhir << endl;
    cout << "----------------------------" << endl;
}

int main() {
    const int maxMahasiswa = 10;
    Mahasiswa daftarMahasiswa[maxMahasiswa];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > maxMahasiswa || jumlahMahasiswa <= 0) {
        cout << "Jumlah mahasiswa harus antara 1 hingga 10." << endl;
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "\nInput data mahasiswa ke-" << (i + 1) << endl;
        inputMahasiswa(daftarMahasiswa[i]);
    }

    // Tampilkan data mahasiswa
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        tampilkanMahasiswa(daftarMahasiswa[i]);
    }

    return 0;
}
