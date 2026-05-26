#include <iostream>
using namespace std;

int main() {
    int jumlahMahasiswa;

    cout << "Selamat Datang Di Program Mengecek Status Kelulusan Mahasiswa" << endl;
    cout << "Berapa banyak data mahasiswa yang ingin dimasukkan? ";
    cin >> jumlahMahasiswa;

    string Nama = string [jumlahMahasiswa];
    float Nilai = float[jumlahMahasiswa ];
    

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Silahkan Masukan Nama Mahasiswa ke-" << (i+1) << ": ";
        cin >> Nama[i];
        cout << "Silahkan Masukan Nilai untuk " << Nama[i] << ": ";
        cin >> Nilai[i];
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (Nilai[i] >= 60) {
            cout << "Selamat, " << Nama[i] << "! Anda LULUS dengan nilai: " << Nilai[i] << endl;
        } else {
            cout << "Maaf, " << Nama[i] << ". Anda GAGAL dengan nilai: " << Nilai[i] << endl;
        }
    }
    return 0;
}
