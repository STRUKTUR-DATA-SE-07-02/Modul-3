#include <iostream>

void cetak_arr(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void tukar_isi_arr(int arr1[3][3], int arr2[3][3],  int baris_k, int kolom_k) {
    int a = arr1[baris_k][kolom_k];
	int b = arr2[baris_k][kolom_k];

	arr2[baris_k][kolom_k] = a;
	arr1[baris_k][kolom_k] = b;
}

void tukar_isi_ptr(int *ptr1, int *ptr2) {
    int c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c;
}

int main() {
	// 2 buah larik dua dimensi
    int sq_1[3][3] = {
		{1, 2, 3}, {4, 5, 6}, {7, 8, 9}
	};

    int sq_2[3][3] = {
		{9, 8, 7}, {6, 5, 4}, {3, 2, 1}
	};
    
	// 2 buah pointer
    int a = 10;
	int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    std::cout << "Larik pertama:" << std::endl;
	cetak_arr(sq_1);
    std::cout << "Larik kedua:" << std::endl;
    cetak_arr(sq_2);

    tukar_isi_arr(sq_1, sq_2, 0, 0);

	std::cout << std::endl;
    std::cout << "Larik pertama setelahnya:" << std::endl;
    cetak_arr(sq_1);
    std::cout << "Larik kedua setelahnya:" << std::endl;
    cetak_arr(sq_2);

    std::cout << std::endl;
    std::cout << "Nilai asli" << std::endl;
    std::cout << "Nilai ptr1: " << *ptr1 << std::endl;
    std::cout << "Nilai ptr2: " << *ptr2 << std::endl;

    tukar_isi_ptr(ptr1, ptr2);

	std::cout << std::endl;
    std::cout << "Nilai setelahnya" << std::endl;
    std::cout << "Nilai ptr1 setelahnya: " << *ptr1 << std::endl;
    std::cout << "Nilai ptr2 setelahnya: " << *ptr2 << std::endl;

    return 0;
}
