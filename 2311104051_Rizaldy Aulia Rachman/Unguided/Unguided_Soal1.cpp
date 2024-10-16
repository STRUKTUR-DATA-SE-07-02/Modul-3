#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

// Fungsi untuk memasukkan data mahasiswa
void inputMahasiswa(Mahasiswa &m) {
    cout << "Input Nama: ";
    cin.ignore(); // Membersihkan buffer agar getline bisa berfungsi
    getline(cin, m.nama);
    
    cout << "Input NIM: ";
    cin >> m.nim;
    
    cout << "Input nilai UTS: ";
    cin >> m.uts;
    
    cout << "Input nilai UAS: ";
    cin >> m.uas;
    
    cout << "Input nilai Tugas: ";
    cin >> m.tugas;
    
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

// Fungsi untuk menampilkan data mahasiswa
void tampilMahasiswa(Mahasiswa m) {
    cout << "\nNama: " << m.nama;
    cout << "\nNIM: " << m.nim;
    cout << "\nNilai UTS: " << m.uts;
    cout << "\nNilai UAS: " << m.uas;
    cout << "\nNilai Tugas: " << m.tugas;
    cout << "\nNilai Akhir: " << m.nilaiAkhir << endl;
}

int main() {
    const int MAX_MHS = 10;  // Maksimal 10 mahasiswa
    Mahasiswa mahasiswa[MAX_MHS];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> jumlahMahasiswa;

    if(jumlahMahasiswa > MAX_MHS) {
        cout << "Jumlah mahasiswa melebihi batas maksimal!" << endl;
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << ":" << endl;
        inputMahasiswa(mahasiswa[i]);
    }

    // Tampilkan data mahasiswa
    cout << "\nDaftar Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << ":" << endl;
        tampilMahasiswa(mahasiswa[i]);
    }

    return 0;
}