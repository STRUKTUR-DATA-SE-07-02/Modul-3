#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float nilaiUts;
    float nilaiUas;
    float nilaiTugas;
    float nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float nilaiUts, float nilaiUas, float nilaiTugas) {
    return 0.3 * nilaiUts + 0.4 * nilaiUas + 0.3 * nilaiTugas;
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa (maksimal 5): ";
    cin >> jumlahMahasiswa;

    // Validasi input
    while (jumlahMahasiswa > 5) {
        cout << "Inputan terlalu banyak. Silakan input ulang: ";
        cin >> jumlahMahasiswa;
    }

    // Deklarasi array mahasiswa
    Mahasiswa mahasiswa[jumlahMahasiswa];

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan nama mahasiswa " << i + 1 << ": ";
        cin >> mahasiswa[i].nama;

        cout << "Masukkan NIM mahasiswa " << i + 1 << ": ";
        cin >> mahasiswa[i].nim;

        cout << "Masukkan nilai UTS mahasiswa " << i + 1 << ": ";
        cin >> mahasiswa[i].nilaiUts;

        cout << "Masukkan nilai UAS mahasiswa " << i + 1 << ": ";
        cin >> mahasiswa[i].nilaiUas;

        cout << "Masukkan nilai tugas mahasiswa " << i + 1 << ": ";
        cin >> mahasiswa[i].nilaiTugas;

        // Hitung nilai akhir
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].nilaiUts, mahasiswa[i].nilaiUas, mahasiswa[i].nilaiTugas);
    }

    // Tampilkan data mahasiswa
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nilai UTS: " << mahasiswa[i].nilaiUts << endl;
        cout << "Nilai UAS: " << mahasiswa[i].nilaiUas << endl;
        cout << "Nilai Tugas: " << mahasiswa[i].nilaiTugas << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
        cout << "*\n";
    }

    return 0;
}