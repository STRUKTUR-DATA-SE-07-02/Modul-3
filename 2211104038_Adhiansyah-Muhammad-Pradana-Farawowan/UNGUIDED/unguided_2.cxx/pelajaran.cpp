#include "pelajaran.h"

pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    pelajaran pel;
    
	pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    
	return pel;
}

void tampil_pelajaran(pelajaran p) {
    std::cout << "Nama mata pelajaran: " << p.namaMapel << std::endl;
    std::cout << "Kode mata pelajaran: " << p.kodeMapel << std::endl;
}
