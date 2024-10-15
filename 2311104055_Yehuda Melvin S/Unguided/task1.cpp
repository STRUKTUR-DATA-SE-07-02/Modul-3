#include <iostream>
#include <string>

using namespace std;

struct Mhs
{
    string nama;
    string nim;
    double uts;
    double uas;
    double tugas;
    double nilaiakhir;
};

double hitungNilaiAkhir(double uts, double uas, double tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}


int main() {
    const int maksMhs = 10;
    Mhs mahasiswa[maksMhs];
    int jmlMhs = 0;

        while (jmlMhs < maksMhs) {
        cout << "Masukkan Nama : ";
        cin >> mahasiswa[jmlMhs].nama;

        if (mahasiswa[jmlMhs].nama == "Selesai") {
            break;
        }

        cout << "Masukkan NIM : ";
        cin >> mahasiswa[jmlMhs].nim;
        cout << "Masukkan nilai  UTS : ";
        cin >> mahasiswa[jmlMhs].uts;
        cout << "Masukkan nilai UAS : ";
        cin >> mahasiswa[jmlMhs].uas;
        cout << "Masukkan nilai Tugas : ";
        cin >> mahasiswa[jmlMhs].tugas;
        cout << "\n";

        mahasiswa[jmlMhs].nilaiakhir =hitungNilaiAkhir(mahasiswa[jmlMhs].uts,
        mahasiswa[jmlMhs].uas, mahasiswa[jmlMhs].tugas);

        jmlMhs++;
    }

    cout << "\nData Mahasiswa :\n";
    for (int i = 0; i < jmlMhs; i++) {
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nilai UTS : " << mahasiswa[i].uts << endl;
        cout << "Nilai UAS : " << mahasiswa[i].uas << endl;
        cout << "Nilai Tugas : " << mahasiswa[i].tugas << endl;
        cout << "Nilai Akhir : " << mahasiswa[i].nilaiakhir << endl;
        cout << "\n";
    }
    return 0;

}
