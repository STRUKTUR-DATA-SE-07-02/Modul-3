#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

struct pelajaran
{
    string namaMapel;
    string kodeMapel;
};

// Deklarasi fungsi create_pelajaran
pelajaran create_pelajaran(string namaMapel, string kodeMapel);

// Deklarasi prosedur tampil_pelajaran
void tampil_pelajaran(pelajaran pel);

#endif