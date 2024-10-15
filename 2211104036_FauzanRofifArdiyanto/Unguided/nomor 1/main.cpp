#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa
{
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas)
{
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main()
{
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;

    cout << "Masukkan jumlah mahasiswa (maks. 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > MAX_MAHASISWA)
    {
        cout << "Jumlah mahasiswa melebihi batas maksimal." << endl;
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";
        cin.ignore(); // Membersihkan input buffer
        getline(cin, mahasiswa[i].nama);
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nilai UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "Nilai UAS: ";
        cin >> mahasiswa[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;

        // Hitung nilai akhir
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    // Output data mahasiswa
    cout << "\nData Mahasiswa dan Nilai Akhir:\n";
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama       : " << mahasiswa[i].nama << endl;
        cout << "NIM        : " << mahasiswa[i].nim << endl;
        cout << "Nilai UTS  : " << mahasiswa[i].uts << endl;
        cout << "Nilai UAS  : " << mahasiswa[i].uas << endl;
        cout << "Nilai Tugas: " << mahasiswa[i].tugas << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
        cout << "--------------------------" << endl;
    }

    return 0;
}