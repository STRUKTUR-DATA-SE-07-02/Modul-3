#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

// Definisi tipe pelajaran
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Fungsi untuk membuat objek pelajaran
pelajaran create_pelajaran(string namapel, string kodepel);

// Prosedur untuk menampilkan informasi pelajaran
void tampil_pelajaran(pelajaran pel);

#endif // PELAJARAN_H_INCLUDED
