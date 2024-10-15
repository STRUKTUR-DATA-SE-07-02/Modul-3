/*#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>

struct pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

pelajaran create_pelajaran(std::string namapel, std::string kodepel);
void tampil_pelajaran(pelajaran pel);
#endif

#include "pelajaran.h"
#include <iostream>

pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    std::cout << "nama pelajaran : " << pel.namaMapel << std::endl;
    std::cout << "nilai : " << pel.kodeMapel << std::endl;
}*/

using namespace std;
#include <iostream>

int main() {
    std::string namapel = "Struktur Data";
    std::string kodepel = "STD";
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);
    return 0;
}
