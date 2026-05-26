#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // KAMUS
    string nama_file = "Hello.txt";
    ifstream fin;
    string s1;
    int i1;
    string y1;

    // ALGORITMA
    fin.open(nama_file);
    if (fin.is_open()) {
        fin >> s1;
        fin >> i1;
        fin >> y1;

        cout << "Isi File '" << nama_file << "':" << endl;
        cout << "Kata 1: " << s1 << endl;
        cout << "Angka : " << i1 << endl;
        cout << "Kata 2: " << y1 << endl;

        fin.close();
    } else {
        cout << "Gagal membuka file '" << nama_file << "'!" << endl;
    }

    return 0;
}