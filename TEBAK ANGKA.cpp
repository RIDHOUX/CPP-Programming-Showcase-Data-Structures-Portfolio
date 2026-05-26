#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Mengatur seed untuk angka acak
    srand(time(0));

    // Mengacak angka antara 1 dan 100
    int angka_rahasia = rand() % 100 + 1;
    int tebakan;
    int percobaan = 0;

    cout << "=== Permainan Tebak Angka ===" << endl;
    cout << "Saya telah memilih angka antara 1 dan 100." << endl;
    cout << "Coba tebak angkanya!" << endl;

    // Permainan dimulai
    do {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;
        percobaan++;

        if (tebakan > angka_rahasia) {
            cout << "Terlalu besar!" << endl;
        } else if (tebakan < angka_rahasia) {
            cout << "Terlalu kecil!" << endl;
        } else {
            cout << "Selamat! Anda menebak angka yang benar dalam " << percobaan << " percobaan." << endl;
        }
    } while (tebakan != angka_rahasia);

    cout << "Terima kasih sudah bermain!" << endl;
    return 0;
}