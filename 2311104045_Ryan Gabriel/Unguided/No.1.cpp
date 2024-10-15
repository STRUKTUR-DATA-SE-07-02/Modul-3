#include<iostream>
using namespace std;

// Definisi struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[50];    
    char nim[10];     
    float uts;        
    float uas;       
    float tugas;      
    float nilaiAkhir; 
};

// Fungsi untuk menghitung nilai akhir mahasiswa
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

// Fungsi untuk memasukkan data mahasiswa
void inputMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan Nama: ";
    cin.ignore();   // Mengabaikan karakter newline sebelumnya
    cin.getline(mhs.nama, 50); 
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;  //
    cout << "Masukkan nilai UTS: ";
    cin >> mhs.uts;  // 
    cout << "Masukkan nilai UAS: ";
    cin >> mhs.uas;  // 
    cout << "Masukkan nilai Tugas: ";
    cin >> mhs.tugas;  // 
    mhs.nilaiAkhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas); 
}

// Fungsi untuk menampilkan data mahasiswa
void tampilMahasiswa(const Mahasiswa &mhs) {
    cout << "\nNama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nilai UTS: " << mhs.uts << endl;
    cout << "Nilai UAS: " << mhs.uas << endl;
    cout << "Nilai Tugas: " << mhs.tugas << endl;
    cout << "Nilai Akhir: " << mhs.nilaiAkhir << endl;
}

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa mhsArray[MAX_MAHASISWA]; // Array untuk menyimpan 10 mahasiswa
    int jumlahMahasiswa;

    cout << "Berapa jumlah mahasiswa yang akan dimasukkan (max 10): ";
    cin >> jumlahMahasiswa;

    if(jumlahMahasiswa > MAX_MAHASISWA) {
        cout << "Jumlah mahasiswa tidak boleh lebih dari 10!" << endl;
        return 1;
    }

    // Input data mahasiswa
    for(int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << (i+1) << endl;
        inputMahasiswa(mhsArray[i]);
    }

    // Tampilkan data mahasiswa
    cout << "\nData Mahasiswa:\n";
    for(int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << (i+1) << endl;
        tampilMahasiswa(mhsArray[i]);
    }

    return 0;
}