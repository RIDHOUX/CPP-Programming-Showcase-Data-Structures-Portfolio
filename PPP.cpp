include <iostream>
using namespace std;

int main(){
	int NumberOfPrices = 0;
	int TotalPrices = 0;
	int price = 0;
	
	cout << "Masukan harga: "
	cin >> 	Price;
	
	While (Price > 0) {
		NumberOfPrices++;
		TotalPrices += Price;
		
		cout << "Masukan harga: "
		cin >> 	Price;
	}
	
	 if (NumberOfPrices > 0) {
	 	int AveragePrice = TotalPrices
	 	cout << "Rata-rata harga: " << AveragePrice << endl;
	}else{
		cout << "Tidak ada harga yang dimasukkan" << endl;
	}
	
	return 0;
}