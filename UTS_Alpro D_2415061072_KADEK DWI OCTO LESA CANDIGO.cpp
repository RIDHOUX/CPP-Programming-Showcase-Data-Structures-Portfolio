//TUGAS UTS ADP PSTI-D
#include <iostream>
using namespace std;                                                            //2415061072

int main (){
	int jenis;
	double Kg;
	double dimensi;
	double total;
	
	
	
	cout << "====================CV Clean=====================\n\n";
	
	cout << "-Masukkan jenis sampah Anda \n1.Organic \n2.Anorganic \n3.B3 \nIsi angka saja = ";
	cin >> jenis;

	cout << "\n\n-Masukkan berat sampah Anda(Kg)= ";
	cin >> Kg;
	
	cout << "\n\n-Masukkan dimensi sampah Anda(m2) = ";
	cin >> dimensi;
	
	
	switch (jenis){
		case 1: // Organic
			total = (2500 * Kg) + (3000 * dimensi);
			break;
		case 2: // Anorganic
			total = (3000 * Kg) + (3500 * dimensi);
			break;
		case 3: // B3
			total = (3500 * Kg) + (4500 * dimensi);
			break;
			default:
				cout << "Tidak Valid\n\n";
	}
	
	if (jenis == 1){
		cout << "Organic   ";
	}
	else if (jenis == 2){
		cout << "Anorganic   ";
	}
	else{
		cout << "B3   ";
	}
	
	if (Kg == 1){
		cout << Kg << "Kg   ";
	}
	else if (Kg == 2){
		cout << Kg << "Kg   ";
	}
	else{
		cout << Kg << "Kg   ";
	}
	
	if (dimensi == 1){
		cout << dimensi << "m2   ";
	}
	else if (dimensi == 2){
		cout << dimensi << "m2   ";
	}
	else{
		cout << dimensi << "m2   ";
	}
	
	 cout << "\nTotal setoran Anda adalah : Rp." << total << endl;
	
	cout << "\nTerimakasih!!";
		
		
	return 0;	
	}

