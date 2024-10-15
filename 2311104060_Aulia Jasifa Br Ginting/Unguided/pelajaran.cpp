#include "pelajaran.h"
#include <iostream>

pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    pelajaran pel;
    pel.namaMpel = namapel;
    pel.kodeMpel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    std::cout << "nama pelajaran : " << pel.namaMpel << std::endl;
    std::cout << "kode : " << pel.kodeMpel << std::endl;
}