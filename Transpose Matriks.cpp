 #include <iostream>
 using namespace std;
 int main () {
 // KAMUS
 int M[10][10]; int NBrs1, NKol1;
 int MTranspose[10][10]; int NBrs2, NKol2;
 int i, j;
 // ALGORITMA
 // Membaca isi matriks M : Buat sebagai latihan
  for (i=0; i<NBrs1; i++) {
 for (j=0; j<NKol2; j++) {
 cout << "Elemen ke-[" << i << ", " << j 
<< "] = ";
 cin >> M[i][j];
}
}
 // Deklarasi dan pengisian MTranspose
 NBrs2 = NKol1; NKol2 = NBrs1;
 for (i=0; i<NBrs2; i++) {
 for (j=0; j<NKol2; j++) {
 MTranspose[i][j] = M[j][i]; //transpose
 }
 }
 // Menuliskan hasil transpose ke layar : Buat sebagai latihan
 cout << MTranspose << endl;
 return 0;
 }