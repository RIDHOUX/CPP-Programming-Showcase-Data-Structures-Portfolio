#include <iostream>
using namespace std;

int main () {
    //DEKLARASI
    int harga_buku;
    int total = 0;
    int jumlah_dibayar;
    int uang_dibayar;
    int kembalian;
    int discon;
    int diskon;
    int total_bayar;

    //ATAS STRUK
    cout << "\t" << "Toko Maribaca" << "\n";
    cout << "------------------------" << "\n";
    cout << "Masukan Total belanjaan = Rp "; cin >> harga_buku;
    cout << "------------------------" << "\n";

    //MENENTUKAN DISKON BERDASARKAN TOTAL BELANJAAN
    if (harga_buku >= 100000 && harga_buku < 150000){
    discon = harga_buku - (harga_buku * 7/100);
    total = discon;
    diskon = harga_buku * 7/100;
    cout << "mendapatkan discon 7%" "\n";
    cout << "total belanjaan = Rp" "\t" <<  harga_buku << "\n";
    cout << "total diskon = Rp" "\t" << diskon << "\n";

    } else if (harga_buku >= 150000 && harga_buku < 25000){
      discon = harga_buku - (harga_buku * 10/100);
      total = discon;
      diskon = harga_buku * 10/100;
      cout << "mendapatkan discon 10%" "\n";
      cout << "total belanjaan = Rp" "\t" <<  harga_buku << "\n";
      cout << "total diskon = Rp" "\t" << diskon << "\n";


    } else if (harga_buku >= 25000){
     discon = harga_buku - (harga_buku * 10/100);
     total = discon;
     diskon = harga_buku * 12/100;
     cout << "mendapatkan discon 12%" "\n";
     cout << "total belanjaan =  Rp" "\t" <<  harga_buku << "\n";
     cout << "total diskon = Rp" "\t"<< diskon << "\n";

    } else {
     cout << "harga asli buku = Rp" << harga_buku << "\n";
     total = harga_buku;
     }

     // Input jumlah uang yang dibayarkan oleh pembeli
     total_bayar = harga_buku - diskon;
     cout << "total yang harus dibayar = Rp" "\t" << total_bayar << "\n";
    cout << "Masukkan jumlah uang yang dibayarkan = Rp ";
    cin >> uang_dibayar;

    // Hitung kembalian
    kembalian = uang_dibayar - total_bayar;

    // Output kembalian
    if (kembalian >= 0) {
        cout << "Kembalian = Rp " << kembalian << endl;
    } else {
        cout << "Uang yang dibayar kurang = Rp " << -kembalian << endl;
    }

    return 0;
}
