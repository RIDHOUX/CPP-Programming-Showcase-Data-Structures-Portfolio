#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string KONTOL;
	int jumlah;
	ofstream FileK;
	FileK.open("KadekKontol.txt");
	if (FileK.is_open()){
		cout <<"BERAPA HUJATAN YANG INGIN SAMPAIKAN KE KADEK" << endl;
		cin >> jumlah;
		
		for(int i = 0; i < jumlah; i++){
		cout << "MASUKAN HUJATAN UNTUK KADEK ke-" << i + 1 <<endl;
		cin >> KONTOL;
		FileK << KONTOL << endl;
	}
		FileK.close();
		cout << "HUJATAN ANDA BERHASIL DI SAMPAIKAN" << endl;
	}
	else{
		cout << "FILENYA RUSAK KEK LU" << endl;
	}
}