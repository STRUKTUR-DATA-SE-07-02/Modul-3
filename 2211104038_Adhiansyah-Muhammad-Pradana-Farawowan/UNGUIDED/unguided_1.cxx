#include <iostream>
#include <iomanip>

struct MAHASISWA {
	std::string nama;
	std::string nim;
	double uts;
	double uas;
	double tugas;
	double nilai_akhir;
};

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
		std::getline(std::cin, data_se[posisi].nama);

		std::cout << "NIM\t\t: ";
		std::cin >> data_se[posisi].nim;

		std::cout << "Nilai UTS\t: ";
		std::cin >> data_se[posisi].uts;

		std::cout << "Nilai UAS\t: ";
		std::cin >> data_se[posisi].uas;

		std::cout << "Nilai tugas\t: ";
		std::cin >> data_se[posisi].tugas;

		data_se[posisi].nilai_akhir = hitung_nilai_akhir(data_se[posisi]);

		std::cout << std::endl;

		std::cin.ignore();

		posisi = posisi + 1;
	}

	std::cout << std::setw(18) << "Nama"
			  << std::setw(12) << "NIM"
			  << std::setw(10) << "UTS"
			  << std::setw(10) << "UAS"
			  << std::setw(10) << "Tugas"
			  << std::setw(17) << "Nilai akhir" << std::endl;

	for (int i = 0; i < jumlah_data; i = i + 1) {
		std::cout << std::setw(18) << data_se[i].nama
              	  << std::setw(12) << data_se[i].nim
              	  << std::setw(10) << data_se[i].uts
                  << std::setw(10) << data_se[i].uas
                  << std::setw(10) << data_se[i].tugas 
		  << std::setw(10) << data_se[i].nilai_akhir << std::endl;
	}

	return 0;
}
