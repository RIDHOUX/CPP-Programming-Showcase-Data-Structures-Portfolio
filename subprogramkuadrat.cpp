//Penjumlahan
 #include <iostream>
 using namespace std;
 // DEKLARASI FUNGSI
 int penjumlahan(int x,int y){
     return x + y;
 }
//Menghasilkan x + y\

    // PROGRAM UTAMA
    int main () {
    // KAMUS
    int x, y, hasil;
     // ALGORITMA
     cout << "x + y" << endl;
     cout << "masukan nilai x " << endl;
     cin >> x;
     cout << "masukan nilai y" << endl;
     cin >> y;
     hasil =  penjumlahan(x,y);
     cout << "hasilnya adalah " << hasil << endl;
     return 0;
}
