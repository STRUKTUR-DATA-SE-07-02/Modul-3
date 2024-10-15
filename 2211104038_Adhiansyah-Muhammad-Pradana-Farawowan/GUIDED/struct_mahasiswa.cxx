#include <iostream>
#include <cstdlib>

struct Mahasiswa {
	char nama[10];
	int nilai1, nilai2;
};

void proses_input_mhs(Mahasiswa &m) {
	std::cout << "Nama: ";
	std::cin >> m.nama;
	std::cout << "Masukkan nilai: ";
	std::cin >> m.nilai1;
	std::cout << "Masukkan nilai kedua: ";
	std::cin >> m.nilai2;
}

float rata_rata(Mahasiswa m) {
	return (m.nilai1 + m.nilai2) / 2;
}

int main() {
	Mahasiswa siswa_x;
	proses_input_mhs(siswa_x);
	std::cout << "Rata-rata: " << rata_rata(siswa_x);
	return 0;
}
