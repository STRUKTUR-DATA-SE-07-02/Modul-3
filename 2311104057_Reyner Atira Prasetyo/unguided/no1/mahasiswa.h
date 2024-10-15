#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Deklarasi fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas);

#endif