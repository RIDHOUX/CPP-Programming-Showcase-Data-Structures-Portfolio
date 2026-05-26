#include <iostream>
using namespace std;

int main() {
    // KAMUS
    int i, countA;
    char TabChar[10]; // deklarasi array of character berukuran 10

    // ALGORITMA
    // Mengisi array of character dari masukan pengguna
    for (i = 0; i < 10; i++) {
        cin >> TabChar[i];
    }

    // Menuliskan kembali ke layar
    countA = 0;
    for (i = 0; i < 10; i++) { // Memulai dari indeks 0
        cout << TabChar[i] << endl;
        if (TabChar[i] == 'A') { // Menggunakan '==' untuk perbandingan
            countA++; // Sekaligus menghitung kemunculan 'A'
        }
    }

    cout << "Banyaknya A: " << countA << endl;
    return 0;
}
