#include <iostream>
#include <iomanip> // Untuk std::setprecision

int main() {
    // Mendeklarasikan variabel untuk berat badan dan tinggi badan
    double beratBadan, tinggiBadan, tinggiBadanMeter, bmi;

    // Meminta input dari pengguna
    std::cout << "Masukkan berat badan (dalam kilogram): ";
    std::cin >> beratBadan;

    std::cout << "Masukkan tinggi badan (dalam sentimeter): ";
    std::cin >> tinggiBadan;

    // Mengubah tinggi badan dari sentimeter ke meter
    tinggiBadanMeter = tinggiBadan / 100.0;

    // Menghitung BMI
    bmi = beratBadan / (tinggiBadanMeter * tinggiBadanMeter);

    // Menampilkan hasil BMI dengan presisi 2 desimal
    std::cout << "BMI Anda adalah: " << std::fixed << std::setprecision(2) << bmi << std::endl;

    // Menentukan kategori BMI
    if (bmi < 18.5) {
        std::cout << "Kategori: Kekurangan berat badan" << std::endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        std::cout << "Kategori: Berat badan normal" << std::endl;
    } else if (bmi >= 25.0 && bmi < 29.9) {
        std::cout << "Kategori: Kelebihan berat badan" << std::endl;
    } else {
        std::cout << "Kategori: Obesitas" << std::endl;
    }

    return 0;
}
