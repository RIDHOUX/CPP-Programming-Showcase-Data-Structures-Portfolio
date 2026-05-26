#include <iostream>
#include <string>
using namespace std;

struct DoubleNode {
    string nama;
    int nim;
    DoubleNode* next;
    DoubleNode* prev;
};

class DoubleLinkedList {
public:
    DoubleNode* head;
    DoubleNode* tail;
    
    DoubleLinkedList() { head = tail = nullptr; }

    void tambahMahasiswa(string nama, int nim) {
        cout << "Menambahkan mahasiswa: " << nama << " dengan NIM " << nim << endl;
        DoubleNode* newNode = new DoubleNode{nama, nim, nullptr, nullptr};
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    void hapusMahasiswa(int nim) {
        cout << "Menghapus mahasiswa dengan NIM " << nim << endl;
        if (!head) return;
        DoubleNode* temp = head;
        while (temp && temp->nim != nim) {
            temp = temp->next;
        }
        if (!temp) return;
        if (temp == head) head = temp->next;
        if (temp == tail) tail = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        delete temp;
    }
    
    void tampilkanMahasiswa() {
        cout << "Daftar mahasiswa (Double Linked List):" << endl;
        DoubleNode* temp = head;
        while (temp) {
            cout << "NIM: " << temp->nim << " | Nama: " << temp->nama << endl;
            temp = temp->next;
        }
    }
};
int main() {
    DoubleLinkedList doubleList;
    
    cout << "\n--- Double Linked List ---\n";
    doubleList.tambahMahasiswa("Ridho", 201);
    doubleList.tambahMahasiswa("Kadek", 202);
    doubleList.tampilkanMahasiswa();
    doubleList.hapusMahasiswa(202);
    doubleList.tampilkanMahasiswa();
    
    return 0;
}