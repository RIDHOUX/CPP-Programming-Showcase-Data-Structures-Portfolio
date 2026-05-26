#include <iostream>
using namespace std;

int main() {
	
	int total = 0;
	float rata_rata;
	
    int suhu[7] = {30, 32, 31, 33, 30, 29, 28};

    cout << "Suhu pada hari ke-4: " << suhu[3] << endl;

    for (int i = 0; i < 7; i++) {
        total += suhu[i];
    }
    
	rata_rata = total / 7.0;
    
	cout << "Rata-rata suhu dalam seminggu: " << rata_rata << endl;

    return 0;
}