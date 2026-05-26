#include <iostream>
using namespace std;

int main() {
    int numberOfPrices = 0;
    int totalPrices = 0;
    int price = 0;

    cout << "Masukkan harga: ";
    cin >> price;

    while (price > 0) {
        numberOfPrices++;
        totalPrices += price;

        cout << "Masukkan harga: ";
        cin >> price;
    }

    if (numberOfPrices > 0) {
        double averagePrice = (double)totalPrices / numberOfPrices;
        cout << "Total Item      : " << numberOfPrices << endl;
        cout << "Total Harga     : Rp " << totalPrices << endl;
        cout << "Rata-rata Harga : Rp " << averagePrice << endl;
    } else {
        cout << "Tidak ada harga yang dimasukkan." << endl;
    }

    return 0;
}