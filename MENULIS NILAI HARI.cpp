#include <iostream>
#include <fstream>
using namespace std;

// Fungsi main
int main () {
ofstream out_stream;
//deklarasi
string NAMA_FILE = "nilaihari.txt";
int nr;

//Algoritma
out_stream.open(NAMA_FILE);
cin >> nr;
while (nr != -999) {
    out_stream << nr << endl;
    cin >> nr;
}

out_stream.close();
return 0;
}