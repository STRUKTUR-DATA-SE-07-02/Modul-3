#include <iostream>
#include <string>

using namespace std;

struct pelajaran {
    string namamapel;
    string kodepel;
};

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namamapel = namapel;
    pel.kodepel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "Nama  Pelajaran : " << pel.namamapel << endl;
    cout << "Nilai : " << pel.kodepel << endl;
}