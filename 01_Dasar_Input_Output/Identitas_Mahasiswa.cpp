#include <iostream>
#include <string>
using namespace std;

int main() {
    string Nama;
    string Kelas;
    string NPM;
    string Instansi;

    cout << "Siapa nama Anda?" << endl;
    cin >> Nama;
    cout << "Masukkan kelas Anda?" << endl;
    cin >> Kelas;
    cout << "Masukkan NPM Anda?" << endl;
    cin >> NPM;
    cout << "Masukkan instansi Anda?" << endl;
    cin >> Instansi;

    cout << "\n=== DATA IDENTITAS MAHASISWA ===" << endl;
    cout << "Nama     : " << Nama << endl;
    cout << "Kelas    : " << Kelas << endl;
    cout << "NPM      : " << NPM << endl;
    cout << "Instansi : " << Instansi << endl;

    return 0;
}