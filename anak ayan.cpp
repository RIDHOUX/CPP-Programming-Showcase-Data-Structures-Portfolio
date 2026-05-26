#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Masukkan jumlah ayam : ";
    cin >> n;

    int i = n;
    do {
        cout << "Tek kotek kotek kotek" << endl;
        cout << "Anak ayam turunlah " << i << endl;
        cout << "Mati satu tinggallah " << i - 1 << endl;
        cout << endl;
        i = i - 1;
    } while (i > 1);
    cout << "Anak ayam turunlah " << i << endl;
    cout << "Mati satu tinggallah induknya" << endl;

return 0;
}
