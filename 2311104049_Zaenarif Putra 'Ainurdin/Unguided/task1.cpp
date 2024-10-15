#include <iostream>
#include <string>

using namespace std;

struct Mhs {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiakhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    int maksMhs;
    cout << "Masukkan jumlah Mahasiswa yang ingin diinputkan (maksimal 10): ";
    cin >> maksMhs;

    if (maksMhs > 10) {
        cout << "Alert!!!, Terlalu Banyak Mahasiswa. Jumlah maksimal adalah 10." << endl;
        return 0;
    }

    Mhs mahasiswa[maksMhs];
    int jmlMhs = 0;

    while (jmlMhs < maksMhs) {
        cout << "Masukkan Nama Mahasiswa " << jmlMhs + 1 << ": ";
        cin >> mahasiswa[jmlMhs].nama;

        if (mahasiswa[jmlMhs].nama == "Selesai") {
            break;
        }

        cout << "Masukkan NIM Mahasiswa " << jmlMhs + 1 << ": ";
        cin >> mahasiswa[jmlMhs].nim;
        cout << "Masukkan nilai UTS Mahasiswa " << jmlMhs + 1 << ": ";
        cin >> mahasiswa[jmlMhs].uts;
        cout << "Masukkan nilai UAS Mahasiswa " << jmlMhs + 1 << ": ";
        cin >> mahasiswa[jmlMhs].uas;
        cout << "Masukkan nilai Tugas Mahasiswa " << jmlMhs + 1 << ": ";
        cin >> mahasiswa[jmlMhs].tugas;

        mahasiswa[jmlMhs].nilaiakhir = hitungNilaiAkhir(mahasiswa[jmlMhs].uts, mahasiswa[jmlMhs].uas, mahasiswa[jmlMhs].tugas);

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
        cout << "***************************\n";
    }

    return 0;
}