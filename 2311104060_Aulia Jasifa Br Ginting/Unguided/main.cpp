#include "pelajaran.h"
#include <iostream>

int main() {
    std::string namapel = "Struktur Data";
    std::string kodepel = "STD";
    
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);
    
    return 0;
}