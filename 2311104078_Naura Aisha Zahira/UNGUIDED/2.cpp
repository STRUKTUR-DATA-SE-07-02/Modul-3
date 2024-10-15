#include <iostream>
#include <string>
using namespace std;

// Definisi ADT Pelajaran di file "pelajaran.h"
struct pelajaran {
    string namamapel;
    string kodepel;
};

// Fungsi untuk membuat objek Pelajaran baru
pelajaran create_pelajaran (string namapel, string kodepel) {
    pelajaran pel;
    pel.namamapel = namapel;
    pel.kodepel = kodepel;
    return pel;
}

// Prosedur untuk menampilkan detail Pelajaran
void tampil_pelajaran (pelajaran pel) {
    cout << "nama pelajaran: " << pel.namamapel << endl;
    cout << "nilai: " << pel.kodepel << endl;
}

int main() {
    // Membuat objek Pelajaran
    pelajaran pel = create_pelajaran ("Struktur Data", "STD");
    // Menampilkan detail Pelajaran
    tampil_pelajaran (pel);
    return 0;
}