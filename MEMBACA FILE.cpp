#include <fstream>
#include  <iostream>
#include <string>

using namespace std;

int main() {
    //KAMUS
    string NAMA_FILE = "hello.txt";
    ifstream fin;
    string s1;
    int i1;
    string y1;

    //ALGORITMA
    fin.open("hello.txt");
    fin >> s1;
    fin >> i1;
    fin >> y1;

    cout << s1 << endl;
    cout << i1 << endl;
    cout << y1 << endl;

fin.close();

    return 0;
}