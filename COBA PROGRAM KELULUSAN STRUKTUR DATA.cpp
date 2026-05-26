#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, npm, kelas;
    int jumlahMatkul;

    cout << "Selamat Datang Di Program Mengecek Status Kelulusan Mahasiswa" << endl;

    cout << "Masukkan Nama Mahasiswa: ";
    cin >> nama;
    cout << "Masukkan NPM Mahasiswa: ";
    cin >> npm;
    cout << "Masukkan Kelas Mahasiswa: ";
    cin >> kelas;

    cout << "Berapa banyak mata kuliah yang ingin diambil oleh " << nama << "? ";
    cin >> jumlahMatkul;

    string matkul[10];
    float nilai[10];

    for (int i = 0; i < jumlahMatkul; i++) {
        cout << "Masukkan Nama Mata Kuliah ke-" << (i + 1) << ": ";
        cin >> matkul[i];
        cout << "Masukkan Nilai untuk Mata Kuliah " << matkul[i] << ": ";
        cin >> nilai[i];
    }

    float totalNilai = 0;
    for (int i = 0; i < jumlahMatkul; i++) {
        totalNilai += nilai[i];
    }
    float rataRata = totalNilai / jumlahMatkul;

    cout << "\nData Mahasiswa:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Kelas: " << kelas << endl;

    cout << "Mata Kuliah yang Diambil:" << endl;
    for (int i = 0; i < jumlahMatkul; i++) {
        cout << "- " << matkul[i] << ": " << nilai[i] << endl;
    }

    cout << "Rata-rata Nilai: " << rataRata << endl;

    if (rataRata >= 60) {
        cout << "Selamat, " << nama << "! Anda LULUS!" << endl;
    } else {
        cout << "Maaf, " << nama << ". Anda GAGAL." << endl;
    }

    return 0;
}