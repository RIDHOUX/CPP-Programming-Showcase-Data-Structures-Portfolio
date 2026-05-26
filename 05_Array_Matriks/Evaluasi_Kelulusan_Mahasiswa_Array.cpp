#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int jumlahMahasiswa;

    cout << "Selamat Datang Di Program Mengecek Status Kelulusan Mahasiswa" << endl;
    cout << "Berapa banyak data mahasiswa yang ingin dimasukkan? ";
    cin >> jumlahMahasiswa;

    // Menggunakan std::vector agar kompatibel dengan standar C++
    vector<string> Nama(jumlahMahasiswa);
    vector<float> Nilai(jumlahMahasiswa);

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Silahkan Masukkan Nama Mahasiswa ke-" << (i + 1) << ": ";
        cin >> Nama[i];
        cout << "Silahkan Masukkan Nilai untuk " << Nama[i] << ": ";
        cin >> Nilai[i];
    }

    cout << "\n=== STATUS KELULUSAN MAHASISWA ===" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (Nilai[i] >= 60) {
            cout << "Selamat, " << Nama[i] << "! Anda LULUS dengan nilai: " << Nilai[i] << endl;
        } else {
            cout << "Maaf, " << Nama[i] << ". Anda GAGAL dengan nilai: " << Nilai[i] << endl;
        }
    }
    return 0;
}
