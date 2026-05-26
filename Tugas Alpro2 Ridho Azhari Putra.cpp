// Menghitung keuntungan Bu tailor
// Menghitung baju dan masker yang diproduksi dan berapa keuntungan dari penjualannya
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi
    float lebar_kain = 1.25;  // dalam meter
    float panjang_kain = 30; // dalam meter
    float kain_per_baju = 3.5; // dalam meter persegi
    float harga_baju = 120000; // dalam Rupiah
    int harga_kain_per_roll = 2900000; // dalam Rupiah per roll
    float panjang_roll = 30; // panjang kain per roll dalam meter
    float ukuran_masker = 0.02; // dalam meter persegi
    int harga_masker = 10000; // dalam Rupiah

    // Hitung total kain yang tersedia (dalam meter persegi)
    float total_kain = lebar_kain * panjang_kain;

    // Hitung berapa banyak jumlah baju yang dapat dijahit
    int jumlah_baju = total_kain / kain_per_baju;

    // Hitung kain yang terpakai untuk baju
    int kain_terpakai_untuk_baju = jumlah_baju * kain_per_baju;

    // Hitung kain yang tersisa
    float sisa_kain = total_kain - kain_terpakai_untuk_baju;

    // Hitung berapa banyak masker yang dapat dibuat
    int jumlah_masker = sisa_kain / ukuran_masker;

    // Hitung total penjualan baju dan masker
    int total_penjualan_baju = jumlah_baju * harga_baju;
    int total_penjualan_masker = jumlah_masker * harga_masker;
    int total_penjualan = total_penjualan_baju + total_penjualan_masker;

    // Hitung harga kain per meter persegi
    float harga_kain_per_meter = harga_kain_per_roll / (lebar_kain * panjang_roll);

    // Hitung total biaya kain
    int total_biaya_kain = total_kain * harga_kain_per_meter;

    // Hitung total keuntungan
    int keuntungan = total_penjualan - total_biaya_kain;

    // Tampilkan hasil
    cout << "Jumlah baju yang dapat dijahit: " << jumlah_baju << endl;
    cout << "Jumlah masker yang dapat dibuat: " << jumlah_masker << endl;
    cout << "Jumlah keuntungan Bu Tailor: Rp " << keuntungan << endl;

    return 0;
}
