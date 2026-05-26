#include <iostream>
#include <cmath> // Untuk menggunakan floor
using namespace std;

int main() {
    // Diketahui
    float panjang_kain = 30.0; // meter
    float lebar_kain = 1.25;   // meter
    float harga_kain = 2900000; // harga kain
    float luas_kain = panjang_kain * lebar_kain; // Luas total kain

    float luas_baju = 3.5; // meter persegi per baju
    float harga_per_baju = 120000; // Harga per baju

    float panjang_masker = 0.2; // meter
    float lebar_masker = 0.1;   // meter
    float harga_per_masker = 10000; // Harga per masker
    float luas_masker = panjang_masker * lebar_masker;

    // Menghitung jumlah baju yang bisa dijahit
    int jumlah_baju = luas_kain / luas_baju;
    jumlah_baju = static_cast<int>(jumlah_baju);

    // Menghitung sisa kain setelah dijahit baju
    float sisa_kain = luas_kain - (jumlah_baju * luas_baju);

    // Menghitung jumlah masker yang bisa dibuat dari sisa kain (dibulatkan ke bawah)
    int jumlah_masker = sisa_kain / luas_masker;

    // Jika hasil pembagian belum bulat, bulatkan ke bawah (jika diperlukan)
    jumlah_masker = floor(jumlah_masker);

    // Menghitung total pendapatan dari penjualan baju dan masker
    float pendapatan_baju = jumlah_baju * harga_per_baju;
    float pendapatan_masker = jumlah_masker * harga_per_masker;
    float total_pendapatan = pendapatan_baju + pendapatan_masker;

    // Menghitung total keuntungan (pendapatan - biaya kain)
    float keuntungan = total_pendapatan - harga_kain;

    // Output hasil
    cout << "Jumlah baju yang dapat dijahit: " << jumlah_baju << endl;
    cout << "Jumlah masker yang dapat dibuat: " << jumlah_masker << endl;

    // Mengecek apakah ada keuntungan atau kerugian
    if (keuntungan > 0) {
        cout << "Total keuntungan: Rp" << keuntungan << endl;
    } else {
        cout << "Total kerugian: Rp" << abs(keuntungan) << endl;
    }

    return 0;
}
