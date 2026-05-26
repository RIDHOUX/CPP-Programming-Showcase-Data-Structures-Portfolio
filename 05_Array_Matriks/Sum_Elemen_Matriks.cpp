#include <iostream>
 using namespace std;
 int main () {
 // KAMUS
 int M[10][10]; //Deklarasimatriks
 int NBrs, NKol;//Barisdan kolomefektif
 int i, j, sum;
 // ALGORITMA
 // Mengisimatriks
 // M diasumsikansudahdiisi
 // Mnghitung sum elemen
 sum = 0;
 for (i=0; i<NBrs; i++) {
 for (j=0; j<NKol; j++) {
 sum = sum + M[i][j];
 }
 }
 // Menuliskan hasil sum ke layar
 cout << "Total semua elemen = " << sum;
 return 0;
 }
