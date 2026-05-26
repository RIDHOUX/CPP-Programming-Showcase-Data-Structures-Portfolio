#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string saran;
    int jumlah;
    ofstream outfile;

    outfile.open("Kadekpintar.txt");
    if (outfile.is_open()) {
        cout << "Berapa saran yang ingin Anda sampaikan ke Kadek? ";
        cin >> jumlah;
        
        // Membersihkan buffer input
        cin.ignore();

        for (int i = 0; i < jumlah; i++) {
            cout << "Masukkan saran untuk Kadek ke-" << (i + 1) << ": ";
            getline(cin, saran); // Menggunakan getline agar saran bisa lebih dari 1 kata
            outfile << saran << endl;
        }

        outfile.close();
        cout << "Saran Anda berhasil disimpan ke 'Kadekpintar.txt'." << endl;
    } else {
        cout << "Gagal membuka file 'Kadekpintar.txt' untuk menulis!" << endl;
    }

    return 0;
}