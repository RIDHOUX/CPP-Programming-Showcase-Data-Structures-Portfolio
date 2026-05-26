#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string Line;
    ifstream Outfile;
    
    // Membuka file untuk dibaca
    Outfile.open("Koleksi_buku.txt");
    
    // Memeriksa apakah file berhasil dibuka
    if (Outfile.is_open()) {
        // Membaca dan menampilkan setiap baris dalam file
        while (getline(Outfile, Line)) {
            cout << Line << endl;
        }
        
        // Menutup file setelah selesai dibaca
        Outfile.close();
    } else {
        // Jika file gagal dibuka
        cout << "File GAGAL DIBUKA" << endl;
    }
    
    return 0;
}