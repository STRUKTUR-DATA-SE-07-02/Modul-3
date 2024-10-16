#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilai_akhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mahasiswa[10];
    int jumlah;

    cout << "Masukkan jumlah MHS Max:10: "; 
	cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa " << i + 1 << "\nNama: "; cin >> mahasiswa[i].nama;
        cout << "NIM: "; cin >> mahasiswa[i].nim;
        cout << "UTS: "; cin >> mahasiswa[i].uts;
        cout << "UAS: "; cin >> mahasiswa[i].uas;
        cout << "Tugas: "; cin >> mahasiswa[i].tugas;

        mahasiswa[i].nilai_akhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlah; i++)
        cout << mahasiswa[i].nama << " (" << mahasiswa[i].nim << ") - Nilai Akhirnya adalah: " << mahasiswa[i].nilai_akhir << endl;

    return 0;
}
