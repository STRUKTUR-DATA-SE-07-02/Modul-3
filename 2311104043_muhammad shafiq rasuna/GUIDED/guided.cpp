#include <iostream>

using namespace std;

struct mahasiswa{
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);



int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout<<"Rata - rata = "<<rata2(mhs);
    return 0;
}
void inputMhs(mahasiswa &m){
    cout<<"Input nim = ";
    cin>>(m).nim;
    cout<<"Input nilai = ";
    cin>>(m).nilai1;
    cout<<"Input nilai = ";
    cin>>(m).nilai2;
}
float rata2(mahasiswa m){
    return(m.nilai1+m.nilai2)/2;
}