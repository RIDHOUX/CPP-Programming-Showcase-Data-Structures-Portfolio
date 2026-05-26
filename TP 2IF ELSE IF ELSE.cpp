#include <iostream>
using namespace std;

int main() {
    int nilai = 85;

    if (nilai >= 90) {
        cout << "Nilai A" << endl;
    } else if (nilai >= 80) {
        cout << "Nilai B" << endl;
    } else if (nilai >= 70) {
        cout << "Nilai C" << endl;
    } else {
        cout << "Nilai D" << endl;
    }

    return 0;
}