#include "pelajaran.h"
#include <iostream>

pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    pelajaran pel;
    pel.namaMaPel = namapel;
    pel.kodeMaPel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    std::cout << "nama pelajaran : " << pel.namaMaPel << std::endl;
    std::cout << "kode : " << pel.kodeMaPel << std::endl;
}
