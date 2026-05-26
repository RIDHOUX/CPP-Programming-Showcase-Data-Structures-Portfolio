// Nilai Akhir

#include <iostream>
#include <iomanip>

using namespace std;

	//Variable
	string  Batas = "===================================================" ;
	string NamaMahasiswa;
	string NPM;
	int MataKuliah;
	int JumlahSKS, JumlahSKS1, JumlahSKS2, JumlahSKS3, JumlahSKS4, JumlahSKS5, JumlahSKS6, JumlahSKS7, JumlahSKS8, JumlahSKS9;
	float NilaiIPK;
	float NilaiKeaktifan;
	float NilaiTugas;
	float NilaiKuis;
	float NilaiUTS;
	float NilaiUAS;
	float NilaiAkhir, NilaiAkhir1, NilaiAkhir2, NilaiAkhir3, NilaiAkhir4, NilaiAkhir5, NilaiAkhir6, NilaiAkhir7, NilaiAkhir8, NilaiAkhir9, NilaiAkhir10;

void nilai (){
 	if (NilaiAkhir <= 85 && NilaiAkhir > 76) {
		cout << "Huruf Mutu: A" <<endl;
		cout << "Angka Mutu : 4" << endl;
		cout << "Status: Lulus" << endl;
	}
	else if (NilaiAkhir < 76 && NilaiAkhir > 71) {
		cout << "Huruf Mutu: B+" << endl;
		cout << "Angka Mutu : 3,5" << endl;
		cout << "Status: Lulus" << endl;
	}
	else if (NilaiAkhir < 71 && NilaiAkhir > 66) {
		cout << "Huruf Mutu: B" << endl;
		cout << "Angka Mutu: 3" << endl;
		cout << "Status: Lulus" << endl;
	}
	else if (NilaiAkhir < 66 && NilaiAkhir > 61) {
		cout << "Huruf Mutu: C+" << endl;
		cout << "Angka Mutu: 2,5" << endl;
		cout << "Status: Lulus" << endl;
	}
	else if (NilaiAkhir < 61 && NilaiAkhir > 55) {
		cout << "Huruf Mutu: C" << endl;
		cout << "Angka Mutu: 2" << endl;
		cout << "Status: Lulus" << endl;
	}
	else if (NilaiAkhir < 55 && NilaiAkhir > 50) {
		cout << "Huruf Mutu: D" << endl;
		cout << "Angka Mutu: 1" << endl;
		cout << "Status: Lulus" << endl;
	}
	else if (NilaiAkhir < 50) {
		cout << "Huruf Mutu: E" << endl;
		cout << "Angka Mutu: 0" << endl;
		cout << "Status: Tidak Lulus" << endl;
}
	else if (NilaiAkhir > 85) {
		cout << "Huruf Mutu: tidak terdefinisi" << endl;
		cout << "Angka Mutu: tidak terdefinisi" << endl;
		cout << "Status: tidak terdefinisi" << endl;
}
		cout << Batas << endl;
}

	void value(){
	cout << "Jumlah SKS: "; cin >> JumlahSKS;
	cout << "Input Nilai Keaktifan(0-16): "; cin >> NilaiKeaktifan;
	NilaiKeaktifan = (NilaiKeaktifan/16)*0.1;
	cout << "Input Nilai Tugas(0-85): "; cin >> NilaiTugas;
	NilaiTugas = (NilaiTugas/85)*0.35;
	cout << "Input Nilai Kuis(0-85): "; cin >> NilaiKuis;
	NilaiKuis = (NilaiKuis/85)*0.15;
	cout << "Input Nilai UTS(0-85): "; cin >> NilaiUTS;
	NilaiUTS = (NilaiUTS/85)*0.2;
	cout << "Input Nilai UAS(0-85): "; cin >> NilaiUAS;
	NilaiUAS = (NilaiUAS/85)*0.2;
	}

int main() {

	//Algoritm
	cout << Batas << endl;
	cout << "Masukan nama mahasiswa: " << endl; cin >> NamaMahasiswa;
	cout << "Masukan NPM(Nomor Pokok Mahasiswa): " << endl; cin >> NPM;

	for (int i = 0; i < 9; i = i + 1)
{
	cout << Batas << endl;
	cout << "Pilihan mata kuliah:" << endl;
	cout << "1. Pendidikan Bahasa Indonesia" << endl
		 << "2. Teknik Digital" << endl
		 << "3. Kalkulus" << endl
		 << "4. Pendidikan Etika" << endl
		 << "5. Pengantar Teknologi Informasi" << endl
		 << "6. Pengetahuan Lingkungan" << endl
		 << "7. Pengetahuan Industri Pertanian" << endl
		 << "8. Pendidikan Pancasila" << endl
		 << "9. Algoritma dan Pemograman" << endl
		 << "Pilih mata kuliah (1-9): "; cin >> MataKuliah;

	switch (MataKuliah) {

	case 1:
	cout << "1. Pendidikan Bahasa Indonesia" << endl;
	value();
	NilaiAkhir1 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir1 << endl;
	break;

	case 2:
	cout << "2. Teknik Digital" << endl;
	value();
	NilaiAkhir2 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir2 << endl;
	break;

	case 3:
	cout << "3. Kalkulus" << endl;
	value();
	NilaiAkhir3 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir3 << endl;
	break;

	case 4:
	cout << "4. Pendidikan Etika" << endl;
	value();
	NilaiAkhir4 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir4 << endl;
	break;

	case 5:
	cout << "5. Pengantar Teknologi Informasi" << endl;
	value();
	NilaiAkhir5 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir5 << endl;
	break;

	case 6:
	cout << "6. Pengetahuan Lingkungan"	<< endl;
	value();
	NilaiAkhir6 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir6 << endl;
	break;

	case 7:
	cout << "7. Pengetahuan Industri Pertanian" << endl;
	value();
	NilaiAkhir7 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir7 << endl;
	break;

	case 8:
	cout << "8. Pendidikan Pancasila" << endl;
	value();
	NilaiAkhir8 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir8 << endl;
	break;

	case 9:
	cout << "9. Algoritma dan Pemograman" << endl;
	value();
	NilaiAkhir9 = (NilaiKeaktifan + NilaiTugas + NilaiKuis + NilaiUTS + NilaiUAS)*85;
	cout << "Nilai Akhir(total 85): " << NilaiAkhir9 << endl;
	break;

	default:
	cout << "Pilihan mata kuliah tidak ada" << endl << "Silahkan pilih mata kuliah yang benar" << endl;
		}
}
	NilaiAkhir10 = (NilaiAkhir1 + NilaiAkhir2 + NilaiAkhir3 + NilaiAkhir4 + NilaiAkhir5 + NilaiAkhir6 + NilaiAkhir7 + NilaiAkhir8 + NilaiAkhir9);
	JumlahSKS = (JumlahSKS1 + JumlahSKS2 + JumlahSKS3 + JumlahSKS4 + JumlahSKS5 + JumlahSKS6 + JumlahSKS7 + JumlahSKS8 + JumlahSKS9);
	NilaiIPK = ((NilaiAkhir*JumlahSKS)/(765*JumlahSKS))*4;

	cout << Batas << Batas << endl;
	cout << left << setw(24) << "Nama Mahasiswa" << ": " << NamaMahasiswa << endl;
    cout << left << setw(24) << "NPM Mahasiswa" << ": " << NPM << endl;
    cout << Batas << Batas << endl;
    cout << "1. Pendidikan Bahasa Indoensia: " << NilaiAkhir1 << endl;
    NilaiAkhir = NilaiAkhir1;
    nilai();

	cout << "2. Teknik Digital: " << NilaiAkhir2 << endl;
	NilaiAkhir = NilaiAkhir2;
    nilai();

	cout << "3. Kalkulus: " << NilaiAkhir3 << endl;
	NilaiAkhir = NilaiAkhir3;
    nilai();

	cout << "4. Pendidikan Etika: " << NilaiAkhir4 << endl;
	NilaiAkhir = NilaiAkhir4;
    nilai();

	cout << "5. Pendidikan Teknologi Informasi: " << NilaiAkhir5 << endl;
	NilaiAkhir = NilaiAkhir5;
    nilai();

	cout << "6. Pengetahuan Lingkungan: " << NilaiAkhir6 << endl;
	NilaiAkhir = NilaiAkhir6;
  	nilai();

	cout << "7. Pendidikan Industri Pertanian: " << NilaiAkhir7 << endl;
	NilaiAkhir = NilaiAkhir7;
    nilai();

	cout << "8. Pendidikan Pancasila: " << NilaiAkhir8 << endl;
	NilaiAkhir = NilaiAkhir8;
   	nilai();

	cout << "9. Algoritma dan Pemograman: " << NilaiAkhir9 << endl;
	NilaiAkhir = NilaiAkhir9;
    nilai();
	cout << "Nilai IP:" << NilaiIPK << endl;
}


