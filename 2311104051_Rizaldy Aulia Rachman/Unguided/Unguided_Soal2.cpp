#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk merepresentasikan sebuah pelajaran
struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Fungsi untuk membuat objek pelajaran baru
Pelajaran create_pelajaran(string nama, string kode) {
    Pelajaran pelajaran;
    pelajaran.namaMapel = nama;
    pelajaran.kodeMapel = kode;
    return pelajaran;
}

// Prosedur untuk menampilkan informasi tentang sebuah pelajaran
void tampil_pelajaran(Pelajaran pelajaran) {
    cout << "Nama Mata Pelajaran: " << pelajaran.namaMapel << endl;
    cout << "Kode Mata Pelajaran: " << pelajaran.kodeMapel << endl;
}

int main() {
    // Membuat objek pelajaran
    Pelajaran pelajaran1 = create_pelajaran("Struktur Data", "STD");

    // Menampilkan informasi pelajaran
    tampil_pelajaran(pelajaran1);

    return 0;
}