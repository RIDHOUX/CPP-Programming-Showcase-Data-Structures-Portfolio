#include <iostream>

using namespace std;

int main() {
    string pilihan;

    cout << "=== Permainan Labirin Teks ===" << endl;
    cout << "Anda berada di depan pintu labirin." << endl;

    do {
        cout << "Pilih jalan (kiri/kanan): ";
        cin >> pilihan;

        if (pilihan == "kiri") {
            cout << "Anda menemukan jalan buntu. Kembali ke awal." << endl;
        } else if (pilihan == "kanan") {
            cout << "Selamat! Anda keluar dari labirin!" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Pilih 'kiri' atau 'kanan'." << endl;
        }
    } while (true);

    return 0;
}
