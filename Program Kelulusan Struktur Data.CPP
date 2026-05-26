#include <iostream>
using namespace std;

int main(){
    string Nama;
    float Nilai;
    
    cout << "Selamat Datang Di Program Mengecek Status Kelulusan Mahasiswa" << endl;
    cout << "Silahkan Masukan Nama Mahasiswa: ";
    cin >> Nama;
    cout << "Silahkan Masukan Nilai Anda: ";
    cin >> Nilai;
    
    if (Nilai >= 60) {
        cout << "Selamat, " << Nama << "! Anda LULUS dengan nilai: " << Nilai << endl;
    } else {
        cout << "Maaf, " << Nama << ". Anda GAGAL dengan nilai: " << Nilai << endl;
    }

    return 0;
}