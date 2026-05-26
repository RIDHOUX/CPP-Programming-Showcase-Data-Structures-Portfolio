#include <iostream>
using namespace std;

int main() {
    int total_siswa_1 = 0;
    float rata_rata_siswa_1;
    int total_mapel_1 = 0;
    float rata_rata_mapel_1;

    int nilai_ujian[3][4] = {
        {85, 90, 78, 88},  
        {92, 85, 80, 87},
        {78, 84, 88, 90}
    };

    cout << "Nilai Siswa 2 pada Mata Pelajaran 3: " << nilai_ujian[1][2] << endl;

    for (int i = 0; i < 4; i++) {
        total_siswa_1 += nilai_ujian[0][i];
    }
    rata_rata_siswa_1 = total_siswa_1 / 4.0;
    cout << "Rata-rata nilai Siswa 1: " << rata_rata_siswa_1 << endl;

    for (int i = 0; i < 3; i++) {
        total_mapel_1 += nilai_ujian[i][0];
    }
    rata_rata_mapel_1 = total_mapel_1 / 3.0;
    cout << "Rata-rata nilai Mata Pelajaran 1: " << rata_rata_mapel_1 << endl;

    return 0;
}