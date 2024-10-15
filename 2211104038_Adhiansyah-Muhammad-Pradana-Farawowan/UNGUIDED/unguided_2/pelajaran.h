#ifndef _PELAJARAN_H
#define _PELAJARAN_H

#include <iostream>

struct pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

pelajaran create_pelajaran(std::string namapel, std::string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif
