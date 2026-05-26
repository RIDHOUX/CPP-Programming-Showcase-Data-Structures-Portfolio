#include <iostream>
using namespace std;

int main() {
    int jumlahMakanan;
    int jumlahMinuman;
    int pilihanMakanan;
    int pilihanMinuman;
    float jarakPengiriman;
    float totalHarga = 0;
    float diskon = 0;
    float ongkir = 0;
    float totalBayar;

    // Input jumlah makanan
    cout << "Berapa banyak jenis makanan yang ingin dipesan? ";
    cin >> jumlahMakanan;

    // Perulangan untuk memesan makanan
    for (int i = 0; i < jumlahMakanan; i++) {
        cout << "\nPilih makanan:\n";
        cout << "1. Soto ayam (Rp18.000)\n";
        cout << "2. Nasi goreng komplit (Rp22.500)\n";
        cout << "3. Sate ayam (Rp20.000)\n";
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihanMakanan;

        // Menambah harga makanan ke total
        if (pilihanMakanan == 1) {
            totalHarga += 18000;
        } else if (pilihanMakanan == 2) {
            totalHarga += 22500;
        } else if (pilihanMakanan == 3) {
            totalHarga += 20000;
        } else {
            cout << "Pilihan makanan tidak valid.\n";
            i--; // Mengulang input jika salah
        }
    }

    // Input jumlah minuman
    cout << "\nBerapa banyak jenis minuman yang ingin dipesan? ";
    cin >> jumlahMinuman;

    // Perulangan untuk memesan minuman
    for (int i = 0; i < jumlahMinuman; i++) {
        cout << "\nPilih minuman:\n";
        cout << "1. Jus mangga (Rp10.000)\n";
        cout << "2. Es teh (Rp5.000)\n";
        cout << "3. Kopi (Rp7.000)\n";
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihanMinuman;

        // Menambah harga minuman ke total
        if (pilihanMinuman == 1) {
            totalHarga += 10000;
        } else if (pilihanMinuman == 2) {
            totalHarga += 5000;
        } else if (pilihanMinuman == 3) {
            totalHarga += 7000;
        } else {
            cout << "Pilihan minuman tidak valid.\n";
            i--; // Mengulang input jika salah
        }
    }

    // Pilih jarak pengiriman
    cout << "\nMasukkan jarak pengiriman (dalam km): ";
    cin >> jarakPengiriman;

    // Menentukan biaya ongkir berdasarkan jarak
    if (jarakPengiriman < 5) {
        ongkir = 7500;
    } else if (jarakPengiriman <= 10) {
        ongkir = 12500;
    } else {
        ongkir = 15000;
    }

    // Menghitung diskon jika total belanja >= Rp30.000
    if (totalHarga >= 30000) {
        diskon = 0.1* totalHarga;
    }

    // Menghitung total yang harus dibayar
    totalBayar = totalHarga - diskon + ongkir;

    // Output total harga, diskon, ongkir, dan total bayar
    cout << "\nTotal harga: Rp " << totalHarga << endl;
    cout << "Diskon: Rp " << diskon << endl;
    cout << "Ongkir: Rp " << ongkir << endl;
    cout << "Total yang harus dibayar: Rp " << totalBayar << endl;

    return 0;
}
