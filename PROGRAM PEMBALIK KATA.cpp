#include <iostream>
#include <stack>
#include <string>

using namespace std;

string membalikkanKalimat(const string& kalimat) {
    stack<char> st;
    string hasil;

    for (char ch : kalimat) {
        st.push(ch);
    }

    while (!st.empty()) {
        hasil += st.top();
        st.pop();
    }

    return hasil;
}

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    string hasil = membalikkanKalimat(kalimat);

    cout << "Kalimat yang dibalik: " << hasil << endl;

    return 0;
}