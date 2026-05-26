#include <iostream>
using namespace std;


string cekBilangan(int bilangan) {
    if (bilangan > 0) {
        cout << "Bilangan tersebut adalah positif." << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan tersebut adalah negatif." << endl;
    } else {
        cout << "Bilangan tersebut adalah nol." << endl;
    }
}

int main() {

    float bilangan;


    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;


    cekBilangan(bilangan);

    return 0;
}
