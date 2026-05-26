#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

string ambilDuaDigitTerakhir(const string& nopol) {
    stack<char> tumpukanAngka;
    string hanyaAngka;

    for (char karakter : nopol) {
        if (isdigit(karakter)) {
            hanyaAngka += karakter;
        }
    }

    if (hanyaAngka.length() < 2) {
        return "0" + hanyaAngka;
    }

    return hanyaAngka.substr(hanyaAngka.length() - 2);
}

bool apakahGenap(const string& duaDigitTerakhir) {
    int angka = stoi(duaDigitTerakhir);
    return angka % 2 == 0;
}

void cekNopol() {
    string nopol;
    cout << "\nMasukkan Nomor Polisi : ";
    getline(cin, nopol);

    string duaDigit = ambilDuaDigitTerakhir(nopol);

    if (duaDigit.empty()) {
        cout << "Nomor Polisi tidak valid.\n";
        return;
    }

    if (apakahGenap(duaDigit)) {
        cout << "Hasil: Nomor Polisi Genap\n";
    } else {
        cout << "Hasil: Nomor Polisi Ganjil\n";
    }

    cout << "NPM  : 2415061039\n";
    cout << "Nama : RIDHO AZHARI PUTRA\n";
}

int main() {
    int pilihan;

    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Cek Nomor Polisi Ganjil/Genap\n";
        cout << "2. Keluar\n";
        cout << "Pilih menu (1/2): ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cekNopol();
                break;
            case 2:
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

    } while (pilihan != 2);

    return 0;
}