#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int pilihan_pemain, pilihan_komputer;

    cout << "=== Permainan Batu-Gunting-Kertas ===" << endl;
    cout << "Pilih: 1 = Batu, 2 = Gunting, 3 = Kertas" << endl;

    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan_pemain;

    pilihan_komputer = rand() % 3 + 1;

    // Menampilkan pilihan komputer
    cout << "Komputer memilih: ";
    if (pilihan_komputer == 1) cout << "Batu" << endl;
    else if (pilihan_komputer == 2) cout << "Gunting" << endl;
    else cout << "Kertas" << endl;

    // Menentukan pemenang
    if (pilihan_pemain == pilihan_komputer) {
        cout << "Hasil: Seri!" << endl;
    } else if ((pilihan_pemain == 1 && pilihan_komputer == 2) || 
               (pilihan_pemain == 2 && pilihan_komputer == 3) || 
               (pilihan_pemain == 3 && pilihan_komputer == 1)) {
        cout << "Hasil: Anda menang!" << endl;
    } else {
        cout << "Hasil: Komputer menang!" << endl;
    }

    return 0;
}
