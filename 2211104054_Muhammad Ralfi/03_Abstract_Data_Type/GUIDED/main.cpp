#include <iostream>

using namespace std;
// structure di tulis sebelum int main
struct mahasiswa{
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);

int main(){
    // panggil struct
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata = " << rata2(mhs);
    return 0;
}

// prosedur
void inputMhs(mahasiswa &m){
    cout << "input nim = ";
    cin >> (m).nim; // pemanggilan structure
    cout << "input nilai = ";
    cin >> (m).nilai1;
    cout << "input nilai = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m){
    return (m.nilai1+m.nilai2)/2;
}
