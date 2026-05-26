#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream out_stream;
    string nama_file = "nilaihari.txt";
    int nr;

    out_stream.open(nama_file);
    if (out_stream.is_open()) {
        cout << "Masukkan nilai harian (ketik -999 untuk mengakhiri):" << endl;
        cout << "Nilai: ";
        cin >> nr;
        
        while (nr != -999) {
            out_stream << nr << endl;
            cout << "Nilai: ";
            cin >> nr;
        }

        out_stream.close();
        cout << "Nilai harian berhasil disimpan ke '" << nama_file << "'." << endl;
    } else {
        cout << "Gagal membuka file '" << nama_file << "' untuk menulis!" << endl;
    }

    return 0;
}