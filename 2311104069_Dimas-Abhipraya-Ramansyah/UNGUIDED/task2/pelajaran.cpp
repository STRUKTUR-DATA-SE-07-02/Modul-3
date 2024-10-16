#include "pelajaran.h"
#include <iostream>

Pelajaran createPelajaran(const std::string& nama, const std::string& kode) {
    Pelajaran pel;
    pel.namaMapel = nama;
    pel.kodeMapel = kode;
    return pel;
}

void tampilPelajaran(const Pelajaran& pel) {
    std::cout << "Nama Pelajaran: " << pel.namaMapel << std::endl;
    std::cout << "Kode Pelajaran: " << pel.kodeMapel << std::endl;
}