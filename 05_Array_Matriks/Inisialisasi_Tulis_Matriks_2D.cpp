 #include <iostream>
 using namespace std;
 int main () {
 // KAMUS
 int M[10][10]; //Deklarasi matriks
 int NBrs, NKol; //Baris dan kolom efektif
 int i, j;
 // ALGORITMA
 // Mengisi matriks
 NBrs = 5; NKol = 5;
 for (i=0; i<NBrs; i++) {
 for (j=0; j<NKol; j++) {
 M[i][j] = i*j;
 }
 }
 // Menuliskan isi matriks ke layar
 for (i=0; i<NBrs; i++) {
 for (j=0; j<NKol; j++) {
 cout << M[i][j] << " ";
 }
 cout << endl; //ganti baris
 }
 return 0;
 }