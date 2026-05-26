#include <fstream>
#include  <iostream>
#include <string>

using namespace std;

int main() {
    //KAMUS
    string NAMA_FILE = "hello.txt";
    ofstream fout;

    //ALGORITMA
    fout.open(NAMA_FILE);
    fout << "Hello" << endl;
    fout << "123" << endl;
    fout << "Ridho" << endl;


fout.close();

return 0;
}