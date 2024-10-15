#include "pelajaran.h"
#include <iostream>
using namespace std;

// Implementasi fungsi untuk membuat pelajaran
pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

// Implementasi prosedur untuk menampilkan data pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "Nama Pelajaran: " << pel.namaMapel << endl;
    cout << "Kode Pelajaran: " << pel.kodeMapel << endl;
}
