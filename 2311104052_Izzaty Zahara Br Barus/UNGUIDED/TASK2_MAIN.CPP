#include <iostream>
#include "TASK2_PELAJARAN.CPP"

using namespace std;

int main() {
    string namapel = "LOGIKA MATEMATIKA";
    string kodepel = "LOGMAT";
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);
    return 0;
}