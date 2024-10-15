#include "pelajaran.h"
#include <iostream>

pelajaran create_pelajaran(string namaMapel, string kodeMapel) {
    return {namaMapel, kodeMapel}; 
}

void tampil_pelajaran(const pelajaran& pel) {
    std::cout << "Nama Pelajaran: " << pel.namaMapel << "\n"
              << "Kode Pelajaran: " << pel.kodeMapel << std::endl;
}