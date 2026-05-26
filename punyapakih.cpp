#include <iostream>
using namespace std;
int main (){
	float p, l, t, v;
	cout << "Masukkan panjang balok" << endl;
	cin >> p;
	cout << "Masukkan lebar balok" << endl;
	cin >> l;
	cout << "Masukkan tinggi balok" << endl;
	cin >> t;
	v = p*l*t;	
	cout << "Volume balok adalah" << endl << v;
	return 0;
}