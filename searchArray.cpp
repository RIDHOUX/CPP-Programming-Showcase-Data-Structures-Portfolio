// File: searchArray.cpp
 // mencari indeks di mananilaiditemukan
 #include <iostream>
 using namespace std;
 int main ()
 { // KAMUS
 int X, i; bool found;
 int TabInt[10];
 // ALGORITMA
 // Pengisiandata: asumsi array terisi
 // mencari suatunilai, yaitu X
 cin>> X;
i = 0; found = false;
 while ((i < 10) && (!found)){
 if (TabInt[i]==X) {
 found = true;
 }else {
 i++;
 }
 } // i = 10 ataufound
 if (found) { // X ada di
 cout<< X <<" ada diindeks" << i;
} else {
cout<< X << " tidakditemukan";
 }
 return 0;
 }
