#include <iostream>
 using namespace std;
 int main () {
 // KAMUS
 int M[10][10];
 int NBrs, NKol;
 int i, j;
 // ALGORITMA
 cout << "Baris efektif = "; cin >> NBrs;
 cout << "Kolom efektif = "; cin >> NKol;
 //asumsi NBrs dan NKol selalu benar
 //Membaca isi matriks
 for (i=0; i<NBrs; i++) {
 for (j=0; j<NKol; j++) {
 cout << "Elemen ke-[" << i << ", " << j 
<< "] = ";
 cin >> M[i][j];
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