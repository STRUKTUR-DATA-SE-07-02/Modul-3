#include <iostream>
#include "soal-02-pelajaran.h"
#include "soal-02-pelajaran.cpp"

using namespace std;



int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel);

    return 0;
}