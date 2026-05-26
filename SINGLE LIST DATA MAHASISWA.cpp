#include <iostream>
#include <string>
using namespace std;

// Struktur untuk Single Linked List
struct Node {
    string nama;
    int nim;
    Node* next;
};

class SingleLinkedList {
public:
    Node* head;
    
    SingleLinkedList() { head = nullptr; }

    void tambahMahasiswa(string nama, int nim) {
        cout << "Menambahkan mahasiswa: " << nama << " dengan NIM " << nim << endl;
        Node* newNode = new Node{nama, nim, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    void hapusMahasiswa(int nim) {
        cout << "Menghapus mahasiswa dengan NIM " << nim << endl;
        if (!head) return;
        if (head->nim == nim) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->nim != nim) {
            temp = temp->next;
        }
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
    
    void tampilkanMahasiswa() {
        cout << "Daftar mahasiswa (Single Linked List):" << endl;
        Node* temp = head;
        while (temp) {
            cout << "NIM: " << temp->nim << " | Nama: " << temp->nama << endl;
            temp = temp->next;
        }
    }
};
int main() {
    SingleLinkedList singleList;
    
    cout << "\n--- Single Linked List ---\n";
    singleList.tambahMahasiswa("Ridho", 101);
    singleList.tambahMahasiswa("Kadek", 102);
    singleList.tampilkanMahasiswa();
    singleList.hapusMahasiswa(101);
    singleList.tampilkanMahasiswa();
     
    return 0;
}