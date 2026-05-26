#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total = 0, uang, kembalian;
    double hrgNanas = 10000, hrgSemangka = 32000, hrgMangga = 15000;
    int pilihan, buah, jumlah;
    string batas = "---------------------------------";
    string batas2 = "==================================";
    
    cout << "SELAMAT DATANG DI TOKO BUAH BADAI" << endl
         << batas << endl
         << "Pilihan buah" << endl
         << "1. Nanas        (Rp10000/buah)" << endl
         << "2. Semangka     (Rp32000/buah)" << endl
         << "3. Mangga       (Rp15000/kg)" << endl
         << endl << endl;
    
    cout << "Berapa jenis buah yang ingin anda beli?" << endl;
    cin >> jumlah;
    
    string namaBuah[jumlah];
    double jmlBuah[jumlah];
    double hargaBuah[jumlah];
    double totalHarga[jumlah];
    
    // Inisialisasi setprecision untuk menampilkan angka dengan 2 angka desimal
    cout << fixed << setprecision(2);
    
    // Proses input untuk tiap buah yang ingin dibeli
    for (int i = 0; i < jumlah; i++) {
        cout << "Barang ke-" << i+1 << " (1/2/3): ";
        cin >> buah;
        
        switch (buah) {
            case 1:
                namaBuah[i] = "Nanas";
                hargaBuah[i] = hrgNanas;
                break;
            case 2:
                namaBuah[i] = "Semangka";
                hargaBuah[i] = hrgSemangka;
                break;
            case 3:
                namaBuah[i] = "Mangga";
                hargaBuah[i] = hrgMangga;
                break;
            default:
                cout << "Pilihan tidak valid! Pilih antara 1/2/3!" << endl;
                i--; // Mengulang input barang yang salah
                continue;
        }
        
        cout << "Masukkan jumlah buah " << namaBuah[i] << ": ";
        cin >> jmlBuah[i];
        
        totalHarga[i] = jmlBuah[i] * hargaBuah[i];
        total += totalHarga[i];
    }
    
    cout << endl << endl;
    
    cout << batas2 << endl;    
    cout << "      Toko Buah Badai\n";
    cout << "     Jalan Haji Sardana\n";
    cout << "   Lingsuh, Bandar Lampung\n" << endl << endl;
    cout << "NO. 123456789X" << endl;
    cout << "TGL.29/11/2024" << endl;
    cout << batas2 << endl;
    
    cout << left << setw(20) << "Nama Buah" 
         << setw(15) << "Jumlah" 
         << setw(20) << "Harga per Buah" 
         << "Total Harga" << endl;
    
    // Menampilkan detail pembelian untuk setiap buah
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(20) << namaBuah[i] 
             << setw(15) << jmlBuah[i] 
             << setw(20) << hargaBuah[i] 
             << totalHarga[i] << endl;
    }
    
    cout << batas2 << endl
         << "Total Pembelian: " << total << endl
         << batas2 << endl
         << "Terimakasih telah berbelanja!" << endl;

    return 0;
}