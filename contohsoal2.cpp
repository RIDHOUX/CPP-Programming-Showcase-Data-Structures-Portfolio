#include <iostream>
using namespace std;

int main  (){
//KAMUS
    float penjara1,penjara2,penjara3;

//ALGORITMA
    cin >> penjara1; cin >> penjara2; cin >> penjara3;

    if ((penjara1 >= 0) && (penjara2 >= 0) && (penjara3 >= 0)) {
        double penjara_total = penjara1 + penjara2 + penjara3;
    cout << penjara_total << endl;
    }
    else {//masukan penjara1 < 0 atau penjara2 < 0 atau penjara3 < 0
    cout << "masukan tahanan tidak boleh negatif" << endl;
    }
    return 0;
}
