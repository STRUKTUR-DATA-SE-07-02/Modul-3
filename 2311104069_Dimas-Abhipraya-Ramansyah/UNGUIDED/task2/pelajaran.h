#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>

struct Pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

Pelajaran createPelajaran(const std::string& nama, const std::string& kode);
void tampilPelajaran(const Pelajaran& pel);

#endif