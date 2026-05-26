#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Meminta pengguna memasukkan 5 bilangan bulat
    cout << "Masukkan 5 bilangan bulat: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Bilangan ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan array dalam urutan terbalik
    cout << "\nArray dalam urutan terbalik: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
