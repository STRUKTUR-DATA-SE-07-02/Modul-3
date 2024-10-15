#include<iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

void inputMahasiswa(Mahasiswa mhs[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Input nama mahasiswa " << i + 1 << ": ";
        cin >> mhs[i].nama;
        cout << "Input NIM mahasiswa " << i + 1 << ": ";
        cin >> mhs[i].nim;
        cout << "Input nilai UTS mahasiswa " << i + 1 << ": ";
        cin >> mhs[i].uts;
        cout << "Input nilai UAS mahasiswa " << i + 1 << ": ";
        cin >> mhs[i].uas;
        cout << "Input nilai Tugas mahasiswa " << i + 1 << ": ";
        cin >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }
}

void displayMahasiswa(Mahasiswa mhs[], int n) {
    cout << "Data Mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nilai UTS: " << mhs[i].uts << endl;
        cout << "Nilai UAS: " << mhs[i].uas << endl;
        cout << "Nilai Tugas: " << mhs[i].tugas << endl;
        cout << "Nilai Akhir: " << mhs[i].nilaiAkhir << endl;
        cout << endl;
    }
}

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa mhs[MAX_MAHASISWA];
    int n;
    cout << "Input jumlah mahasiswa (max. 10): ";
    cin >> n;
    if (n > MAX_MAHASISWA) {
        cout << "Jumlah mahasiswa melebihi batas!" << endl;
        return 1;
    }
    inputMahasiswa(mhs, n);
    displayMahasiswa(mhs, n);
    return 0;
}