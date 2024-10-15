#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiTugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    float nilaiAkhir = (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
    return nilaiAkhir;
}

int main() {
    const int maxMahasiswa = 10;
    Mahasiswa dataMahasiswa[maxMahasiswa];
    int jumlah;

    cout << "Berapa jumlah mahasiswa yang akan diinput (maksimal 10): ";
    cin >> jumlah;

    if (jumlah > maxMahasiswa) {
        cout << "Jumlah tidak boleh lebih dari " << maxMahasiswa << endl;
        return 1;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << (i + 1) << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, dataMahasiswa[i].nama);
        cout << "NIM: ";
        cin >> dataMahasiswa[i].nim;
        cout << "Nilai UTS: ";
        cin >> dataMahasiswa[i].nilaiUTS;
        cout << "Nilai UAS: ";
        cin >> dataMahasiswa[i].nilaiUAS;
        cout << "Nilai Tugas: ";
        cin >> dataMahasiswa[i].nilaiTugas;

        dataMahasiswa[i].nilaiAkhir = hitungNilaiAkhir(
            dataMahasiswa[i].nilaiUTS,
            dataMahasiswa[i].nilaiUAS,
            dataMahasiswa[i].nilaiTugas
        );
    }


    cout << "\nData Mahasiswa dan Nilai Akhir:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa " << (i + 1) << endl;
        cout << "Nama: " << dataMahasiswa[i].nama << endl;
        cout << "NIM: " << dataMahasiswa[i].nim << endl;
        cout << "Nilai UTS: " << dataMahasiswa[i].nilaiUTS << endl;
        cout << "Nilai UAS: " << dataMahasiswa[i].nilaiUAS << endl;
        cout << "Nilai Tugas: " << dataMahasiswa[i].nilaiTugas << endl;
        cout << "Nilai Akhir: " << dataMahasiswa[i].nilaiAkhir << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}


