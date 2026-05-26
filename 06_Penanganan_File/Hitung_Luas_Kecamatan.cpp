#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in_stream;
    string nama_file = "luas_kecamatan_bandarlampung.txt";
    float luas;
    float luaskab = 0.0;

    in_stream.open(nama_file);
    if (in_stream.is_open()) {
        // Membaca file secara aman menggunakan loop stream extraction
        while (in_stream >> luas) {
            luaskab += luas;
        }
        
        cout << "=== INFORMASI LUAS DAERAH ===" << endl;
        cout << "Luas total kecamatan di Bandar Lampung adalah: " << luaskab << " km2" << endl;
        in_stream.close();
    } else {
        cout << "Gagal membuka file '" << nama_file << "'!" << endl;
    }

    return 0;
}