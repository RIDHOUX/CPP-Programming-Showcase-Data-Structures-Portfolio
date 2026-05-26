#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ifstream in_stream;
	//deklarasi
	string NAMA_FILE = "luas_kecamatan_bandarlampung.txt";
	float luas;
	float luaskab;
	
	//Algoritma
	in_stream.open(NAMA_FILE);
	luaskab = 0;
	while (!in_stream.eof()) {
	    in_stream >> luas;
	    luaskab += luas;
	}
	
	cout << "Luas Kabupaten Lampung 2022 Adalah " << luaskab << endl;
	in_stream.close();
	return 0;
}