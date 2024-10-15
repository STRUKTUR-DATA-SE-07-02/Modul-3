#include "pelajaran.h"
#include <iostream>
using namespace std;

// Fungsi create_pelajaran
pelajaran create_pelajaran(string namaMapel, string kodeMapel)
{
    pelajaran pel;
    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;
    return pel;
}

// Prosedur tampil_pelajaran
void tampil_pelajaran(pelajaran pel)
{
    cout << "Nama pelajaran : " << pel.namaMapel << endl;
    cout << "Nilai          : " << pel.kodeMapel << endl;
}