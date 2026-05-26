#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // KAMUS
    string nama_file = "Hello.txt";
    ofstream fout;

    // ALGORITMA
    fout.open(nama_file);
    if (fout.is_open()) {
        fout << "Hello" << endl;
        fout << "123" << endl;
        fout << "Ridho" << endl;
        fout.close();
        cout << "Berhasil menulis data ke file '" << nama_file << "'." << endl;
    } else {
        cout << "Gagal membuka file '" << nama_file << "' untuk menulis!" << endl;
    }

    return 0;
}