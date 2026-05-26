#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));
    string kata_rahasia[] = {"ELEKTOR", "GELANG", "TEKNIK", "GEDUNG H", "ALGORITMA"};
    string kata, tebakan;

    // Pilih kata rahasia secara acak
    kata = kata_rahasia[rand() % 5];

    // Acak huruf pada kata
    string kata_acak = kata;
    random_shuffle(kata_acak.begin(), kata_acak.end());

    cout << "=== Permainan Tebak Kata ===" << endl;
    cout << "Tebak kata dari huruf-huruf berikut: " << kata_acak << endl;

    do {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;

        if (tebakan == kata) {
            cout << "Selamat! Anda menebak kata dengan benar!" << endl;
        } else {
            cout << "Salah, coba lagi." << endl;
        }
    } while (tebakan != kata);

    return 0;
}
