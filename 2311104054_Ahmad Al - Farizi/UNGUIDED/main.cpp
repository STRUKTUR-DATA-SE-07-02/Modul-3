#include "pelajaran.h"
#include <iostream>
using namespace std;

int main() {
    Pelajaran pel = create_pelajaran("Matematika", "MTH");
    tampil_pelajaran(pel);
    return 0;
}
