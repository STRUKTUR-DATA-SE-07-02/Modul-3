#include <iostream>

struct MAHASISWA {
	std::string nama;
	std::string nim;
	double uts;
	double uas;
	double tugas;
	double nilai_akhir;
};

// Gunakan parameter tipe data MAHASISWA agar bisa langsung akses properti
double hitung_nilai_akhir(MAHASISWA& m) {
	return (0.3 * m.uts) + (0.4 * m.uas) + (0.3 * m.tugas);
}

int main() {
	struct MAHASISWA data_se[10];

	int jumlah_data;
	std::cout << "Masukkan jumlah data yang ingin diproses (maks. 10): ";

	std::cin >> jumlah_data;
	std::cin.ignore();

	std::cout << std::endl;

	int posisi = 0;
	while (true) {
		if ((posisi) == jumlah_data) {
			break;
		}

		std::cout << "Nama\t\t: ";
		std::cin >> data_se[posisi].nama;

		std::cout << "NIM\t\t: ";
		std::cin >> data_se[posisi].nim;

		std::cout << "Nilai UTS\t: ";
		std::cin >> data_se[posisi].uts;

		std::cout << "Nilai UAS\t: ";
		std::cin >> data_se[posisi].uas;

		std::cout << "Nilai tugas\t: ";
		std::cin >> data_se[posisi].tugas;

		data_se[posisi].nilai_akhir = hitung_nilai_akhir(data_se[posisi]);

		posisi = posisi + 1;
	}

	return 0;
}
