#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Mahasiswa {
public:
    string nama;
    string nim;
    double uts;
    double uas;
    double tugas;
    double nilaiAkhir;

    Mahasiswa(string n, string id, double u, double a, double t) {
        nama = n;
        nim = id;
        uts = u;
        uas = a;
        tugas = t;
        nilaiAkhir = calculateNilaiAkhir(); 
    }

    double calculateNilaiAkhir() {
        return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
    }

    void displayData() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Nilai UTS: " << fixed << setprecision(2) << uts << endl;
        cout << "Nilai UAS: " << fixed << setprecision(2) << uas << endl;
        cout << "Nilai Tugas: " << fixed << setprecision(2) << tugas << endl;
        cout << "Nilai Akhir: " << fixed << setprecision(2) << nilaiAkhir << endl;
        cout << endl;
    }
};

int main() {
    Mahasiswa* mahasiswaArray[10]; // Array untuk menyimpan data mahasiswa
    int count = 0; // Menghitung jumlah mahasiswa yang disimpan

    while (count < 10) {
        string nama, nim;
        double uts, uas, tugas;

        cout << "Masukkan data mahasiswa ke-" << (count + 1) << endl;

        cout << "Nama: ";
        getline(cin, nama);

        cout << "NIM: ";
        getline(cin, nim);

        cout << "Nilai UTS: ";
        cin >> uts;

        cout << "Nilai UAS: ";
        cin >> uas;

        cout << "Nilai Tugas: ";
        cin >> tugas;
        cin.ignore(); // membersihkan buffer cin

        // Membuat objek mahasiswa dan menyimpannya dalam array
        mahasiswaArray[count] = new Mahasiswa(nama, nim, uts, uas, tugas);
        count++;

        // Menanyakan apakah ingin menambah data mahasiswa lagi
        if (count < 10) {
            string response;
            cout << "Apakah Anda ingin menambahkan data mahasiswa lagi? (ya/tidak): ";
            getline(cin, response);
            if (response != "ya" && response != "YA") {
                break;
            }
        }
    }

    // Menampilkan data mahasiswa
    cout << "\nData Mahasiswa:" << endl;
    for (int i = 0; i < count; i++) {
        mahasiswaArray[i]->displayData();
        delete mahasiswaArray[i]; // Menghapus objek setelah digunakan
    }

    return 0;
}
