#include <iostream>
#include <iomanip> 
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    const int MAKS_MAHASISWA = 10;
    Mahasiswa mahasiswa[MAKS_MAHASISWA];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > MAKS_MAHASISWA) {
        cout << "Jumlah mahasiswa melebihi batas maksimal (10). Program dihentikan." << endl;
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData mahasiswa ke-" << (i + 1) << endl;
        cout << "Nama      : ";
        cin.ignore(); 
        getline(cin, mahasiswa[i].nama);
        cout << "NIM       : ";
        getline(cin, mahasiswa[i].nim);
        cout << "Nilai UTS : ";
        cin >> mahasiswa[i].uts;
        cout << "Nilai UAS : ";
        cin >> mahasiswa[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;

        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    cout << "\nData Mahasiswa: \n";
    cout << "==========================================================================\n";
    cout << left << setw(5) << "No" << setw(20) << "Nama" << setw(15) << "NIM" << setw(10) << "UTS" << setw(10) << "UAS" << setw(10) << "Tugas" << setw(10) << "Nilai Akhir" << endl;
    cout << "==========================================================================\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << left << setw(5) << (i + 1) 
             << setw(20) << mahasiswa[i].nama 
             << setw(15) << mahasiswa[i].nim 
             << setw(10) << mahasiswa[i].uts 
             << setw(10) << mahasiswa[i].uas 
             << setw(10) << mahasiswa[i].tugas 
             << setw(10) << fixed << setprecision(2) << mahasiswa[i].nilaiAkhir << endl;
    }

    return 0;
}
