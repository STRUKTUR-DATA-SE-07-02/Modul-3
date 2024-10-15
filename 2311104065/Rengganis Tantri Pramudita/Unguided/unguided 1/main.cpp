#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilai_akhir;
};
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}
int main() {
    Mahasiswa daftarMhs[10];
    int jumlahMhs = 0;

    while (jumlahMhs < 10) {
        cout << "Masukkan data mahasiswa ke-" << jumlahMhs + 1 << " (atau ketik 'selesai' untuk nama jika sudah selesai):\n";
        cout << "Nama: ";
        getline(cin, daftarMhs[jumlahMhs].nama);
        if (daftarMhs[jumlahMhs].nama == "selesai") break;
        cout << "NIM: ";
        getline(cin, daftarMhs[jumlahMhs].nim);
        cout << "Nilai UTS: ";
        cin >> daftarMhs[jumlahMhs].uts;
        cout << "Nilai UAS: ";
        cin >> daftarMhs[jumlahMhs].uas;
        cout << "Nilai Tugas: ";
        cin >> daftarMhs[jumlahMhs].tugas;
        daftarMhs[jumlahMhs].nilai_akhir = hitungNilaiAkhir(daftarMhs[jumlahMhs].uts,
                                                            daftarMhs[jumlahMhs].uas,
                                                            daftarMhs[jumlahMhs].tugas);

        jumlahMhs++;
        cin.ignore(); // Membersihkan buffer input
    }
    cout << "\nDaftar Mahasiswa:\n";
    for (int i = 0; i < jumlahMhs; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ":\n";
        cout << "Nama: " << daftarMhs[i].nama << endl;
        cout << "NIM: " << daftarMhs[i].nim << endl;
        cout << "Nilai Akhir: " << daftarMhs[i].nilai_akhir << endl << endl;
    }
    return 0;
}
