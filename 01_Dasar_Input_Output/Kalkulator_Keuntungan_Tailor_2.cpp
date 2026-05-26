#include <iostream>
using namespace std;

int main() {
    // Diketahui
    double lebar_kain = 1.25;     // meter
    double panjang_kain = 30;     // meter
    double total_kain = lebar_kain * panjang_kain; // luas total kain dalam meter persegi
    double kain_per_baju = 3.5;   // meter persegi
    double harga_baju = 120000;   // harga jual per baju
    double harga_kain = 2900000;  // harga kain yang dibeli
    double ukuran_masker = 0.2 * 0.1; // ukuran kain untuk satu masker dalam meter persegi
    double harga_masker = 10000;  // harga jual per masker

    // Hitung berapa banyak baju yang dapat dijahit
    int jumlah_baju = total_kain / kain_per_baju;

    // Hitung sisa kain setelah membuat baju
    double sisa_kain = total_kain - (jumlah_baju * kain_per_baju);

    // Hitung berapa banyak masker yang dapat dibuat dari sisa kain
    int jumlah_masker = sisa_kain / ukuran_masker;

    // Hitung total penjualan baju dan masker
    double total_penjualan_baju = jumlah_baju * harga_baju;
    double total_penjualan_masker = jumlah_masker * harga_masker;
    double total_penjualan = total_penjualan_baju + total_penjualan_masker;

    // Hitung total keuntungan
    double keuntungan = total_penjualan - harga_kain;

    // Tampilkan hasil
    cout << "Jumlah baju yang dapat dijahit: " << jumlah_baju << endl;
    cout << "Jumlah masker yang dapat dibuat: " << jumlah_masker << endl;
    cout << "Total keuntungan Bu Tailor Sweet: Rp " << keuntungan << endl;

    return 0;
}
