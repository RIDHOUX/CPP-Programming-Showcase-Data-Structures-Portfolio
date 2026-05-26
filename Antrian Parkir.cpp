#include <iostream>
#include <string>

using namespace std;

struct Node {
    string platNomor;
    Node* next;
};

class Queue {
private:
    Node* depan;
    Node* belakang;
    int jumlah;

public:
    Queue() {
        depan = nullptr;
        belakang = nullptr;
        jumlah = 0;
    }

    void ambilAntrian(string plat) {
        Node* baru = new Node{plat, nullptr};
        if (belakang == nullptr) {
            depan = belakang = baru;
        } else {
            belakang->next = baru;
            belakang = baru;
        }
        jumlah++;
        cout << "Kendaraan dengan plat \"" << plat << "\" telah masuk antrian.\n";
    }

    void cekAntrianTerakhir() {
        if (belakang == nullptr) {
            cout << "Antrian kosong.\n";
        } else {
            cout << "Plat nomor kendaraan terakhir: " << belakang->platNomor << "\n";
        }
    }

    void simulasi200Antrian() {
        for (int i = 1; i <= 200; ++i) {
            ambilAntrian("BE " + to_string(i) + " ASN");
        }
        cout << "Simulasi 200 antrian selesai ditambahkan.\n";
    }

    void jumlahKendaraanHariIni() {
        cout << "Jumlah kendaraan parkir hari ini: " << jumlah << "\n";
    }

    ~Queue() {
        while (depan != nullptr) {
            Node* hapus = depan;
            depan = depan->next;
            delete hapus;
        }
    }
};

int main() {
    Queue antrianParkir;
    int pilihan;
    string platNomor;

    do {
        cout << "\n===== APLIKASI ANTRIAN PARKIR =====\n";
        cout << "1. Ambil Antrian Parkir\n";
        cout << "2. Cek Antrian Terakhir\n";
        cout << "3. Simulasi Tambah 200 Antrian Parkir\n";
        cout << "4. Jumlah Kendaraan Parkir Hari Ini\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan plat nomor kendaraan: ";
                getline(cin, platNomor);
                antrianParkir.ambilAntrian(platNomor);
                break;
            case 2:
                antrianParkir.cekAntrianTerakhir();
                break;
            case 3:
                antrianParkir.simulasi200Antrian();
                break;
            case 4:
                antrianParkir.jumlahKendaraanHariIni();
                break;
            case 5:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 5);

    cout << "\nNPM  : 2415061039\n";
    cout << "Nama : RIDHO AZHARI PUTRA\n";

    return 0;
}