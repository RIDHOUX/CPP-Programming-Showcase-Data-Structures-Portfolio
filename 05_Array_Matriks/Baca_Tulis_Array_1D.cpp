#include <iostream>
using namespace std;

int main() {
    int arr[100];    // deklarasi array of integer berukuran 100
    int count = 0;   // variabel untuk menghitung jumlah elemen yang terisi
    int total = 0;   // variabel untuk menghitung jumlah total elemen array

    cout << "Masukkan elemen-elemen array (maksimal 100, masukkan -999 untuk berhenti):" << endl;
    for (int i = 0; i < 100; i++) {
        int input;
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> input;

        // Cek kondisi untuk berhenti
        if (input == -999) {
            break; // keluar dari loop jika input adalah -999
        }

        arr[i] = input; // simpan input ke dalam array
        count++;        // hitung jumlah elemen yang terisi
        total += input; // tambahkan nilai elemen ke total
    }

    // Tampilkan jumlah elemen yang terisi dan totalnya
    cout << "\nJumlah elemen yang terisi: " << count << endl;
    cout << "Jumlah total seluruh elemen: " << total << endl;

    return 0;
}
