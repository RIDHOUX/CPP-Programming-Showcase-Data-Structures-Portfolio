 // File: minArray.cpp
 // mencari nilai minimum pada array
#include <iostream>
 using namespace std;
 int main ()
 { // KAMUS
 int i,min;
 int TabInt[10];
 // ALGORITMA
 // data nilai telah terisi
 // mencari nilai minimum
 min=TabInt[0]; //inisialisasi min dgn elemen ke-0
 for (i=1; i<10; i++) {
 if (TabInt[i]<min) {
 min=TabInt[i];
 }
 }
 cout<< "Nilai minimum: " << min << endl;
 return 0;
 }
