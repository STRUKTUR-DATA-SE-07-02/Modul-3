#include<iostream>

using namespace std;

struct mahasiswa{
    char nim[20];
    int nilai1,nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);

int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata = " << rata2(mhs);
    return 0;
}

void inputMhs(mahasiswa &m) {
    cout << "Input NIM = ";
    cin >> (m).nim;
    cout << "Input Nilai = ";
    cin >> (m).nilai1;
    cout << "Input Nilai  = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m){
    return(m.nilai1+m.nilai2)/2;
}