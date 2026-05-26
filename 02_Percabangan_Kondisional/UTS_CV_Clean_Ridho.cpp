#include <iostream>
using namespace std;

int main() {

//DEKLARASI
    string Jenis_Sampah;
    int Berat_Sampah;
    int Dimensi_Sampah; //RIDHO AZHARI PUTRA
    int Biaya_Per_Kg;
    int Biaya_Per_M2;
    int Biaya_Berat;
    int Biaya_Dimensi;
    int Biaya_Total;

//ALGORITMA
    cout << "Masukkan jenis sampah (Organic, Anorganic, B3): ";
    cin >> Jenis_Sampah;
    cout << "Masukkan berat sampah (kg): ";
    cin >> Berat_Sampah;
    cout << "Masukkan dimensi sampah (m2): ";
    cin >> Dimensi_Sampah;

    switch (Jenis_Sampah[0]) {
        case 'O':  // Organic
        case 'o':
            Biaya_Per_Kg = 2500;
            Biaya_Per_M2 = 3000;
            break;
        case 'A':  // Anorganic
        case 'a':
            Biaya_Per_Kg = 3000;
            Biaya_Per_M2 = 3500;
            break;
        case 'B':  // B3
        case 'b':
            Biaya_Per_Kg = 3500;
            Biaya_Per_M2 = 4500;
            break;
        default:
            cout << "Jenis sampah tidak valid!" << endl;
            return 0;
    }

    Biaya_Berat = Berat_Sampah * Biaya_Per_Kg;
    Biaya_Dimensi = Dimensi_Sampah * Biaya_Per_M2;

    Biaya_Total = (Biaya_Berat > Biaya_Dimensi) ? Biaya_Berat : Biaya_Dimensi;

    cout << "Biaya total pengolahan sampah: Rp " << Biaya_Total << endl;

    return 0;
}
