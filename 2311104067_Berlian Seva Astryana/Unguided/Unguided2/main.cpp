#include <iostream>
#include "pelajaran.h"
#include <string>

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    // Membuat objek pelajaran menggunakan create_pelajaran
    pelajaran pel = create_pelajaran(namapel, kodepel);

    // Menampilkan informasi pelajaran
    tampil_pelajaran(pel);

    return 0;
}
