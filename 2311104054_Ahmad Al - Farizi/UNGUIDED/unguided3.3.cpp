#include <iostream>

void tampilkanArray(int arr[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int posisi1, int posisi2) {
  int temp = arr1[posisi1][posisi2];
  arr1[posisi1][posisi2] = arr2[posisi1][posisi2];
  arr2[posisi1][posisi2] = temp;
}

void tukarPointer(int* ptr1, int* ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main() {

  int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

  int* ptr1 = new int;
  int* ptr2 = new int;
  *ptr1 = 20;
  *ptr2 = 30;

  std::cout << "Isi array 1:" << std::endl;
  tampilkanArray(arr1);
  std::cout << "Isi array 2:" << std::endl;
  tampilkanArray(arr2);

  tukarArray(arr1, arr2, 1, 1);
  std::cout << "Isi array 1 setelah ditukar:" << std::endl;
  tampilkanArray(arr1);
  std::cout << "Isi array 2 setelah ditukar:" << std::endl;
  tampilkanArray(arr2);

  tukarPointer(ptr1, ptr2);
  std::cout << "Isi ptr1 setelah ditukar: " << *ptr1 << std::endl;
  std::cout << "Isi ptr2 setelah ditukar: " << *ptr2 << std::endl;

  delete ptr1;
  delete ptr2;

  return 0;
}