#include <iostream>

using namespace std;

struct mahasiswa{
   char nim[10];
   int nilai1, nilai2;
};

void inputMahasiswa(mahasiswa &m);
float rata2(mahasiswa m);

int main(){
   mahasiswa Mahasiswa;
   inputMahasiswa(Mahasiswa);
   cout << "Average = " << rata2(Mahasiswa) << endl;
   return 0;
}

void inputMahasiswa(mahasiswa &m){
   cout << "Input NIM : ";
   cin >> (m).nim;
   cout << "Input Nilai 1 : ";
   cin >> (m).nilai1;
   cout << "Input Nilai 2 : ";
   cin >> (m).nilai2;
}

float rata2(mahasiswa m){
   return((m).nilai1 + (m).nilai2) / 2;
}
