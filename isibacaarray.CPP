 // File: isibacaarray.cpp
 // Mengisi array dan menampilkan
// seluruh elemen pada array
#include <iostream>
 using namespace std;
 int main ()
 { // KAMUS
 int TabInt[10]; int i;
 // Algoritma
// mengisi array
 for (i=0; i<=10; i++) {
 TabInt[i]=i*10;
 }
 // membaca danmenuliskan isi
 // array ke layar
 for (i=0; i<=10; i++) {
 cout << TabInt[i] << endl;
 }
 return 0;
 }
