#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream infile;
    
    // Membuka file untuk dibaca (menggunakan nama file sesuai filesystem)
    infile.open("koleksi_buku.txt");
    
    // Memeriksa apakah file berhasil dibuka
    if (infile.is_open()) {
        cout << "=== DAFTAR KOLEKSI BUKU ===" << endl;
        // Membaca dan menampilkan setiap baris dalam file
        while (getline(infile, line)) {
            cout << line << endl;
        }
        
        // Menutup file setelah selesai dibaca
        infile.close();
    } else {
        // Jika file gagal dibuka
        cout << "File GAGAL DIBUKA! Pastikan file 'koleksi_buku.txt' berada di direktori yang sama." << endl;
    }
    
    return 0;
}