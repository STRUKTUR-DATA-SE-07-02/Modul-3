#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa {
   string nama;
   int nim;
   float uts;
   float uas;
   float tugas;
   float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
   return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;

    for (int i = 0; i < MAX_MAHASISWA; i++) {
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mahasiswa[i].nama);
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "UAS: ";
        cin >> mahasiswa[i].uas;
        cout << "Tugas: ";
        cin >> mahasiswa[i].tugas;
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
        jumlahMahasiswa++;
    }

    cout << "Data Mahasiswa:" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "UTS: " << mahasiswa[i].uts << endl;
        cout << "UAS: " << mahasiswa[i].uas << endl;
        cout << "Tugas: " << mahasiswa[i].tugas << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
        cout << endl;
    }

    return 0;
}
