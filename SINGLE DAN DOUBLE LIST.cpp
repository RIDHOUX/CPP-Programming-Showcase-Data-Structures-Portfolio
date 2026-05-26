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

// Struktur untuk Double Linked List
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
    SingleLinkedList singleList;
    DoubleLinkedList doubleList;
    
    cout << "\n--- Single Linked List ---\n";
    singleList.tambahMahasiswa("Alice", 101);
    singleList.tambahMahasiswa("Bob", 102);
    singleList.tampilkanMahasiswa();
    singleList.hapusMahasiswa(101);
    singleList.tampilkanMahasiswa();
    
    cout << "\n--- Double Linked List ---\n";
    doubleList.tambahMahasiswa("Charlie", 201);
    doubleList.tambahMahasiswa("David", 202);
    doubleList.tampilkanMahasiswa();
    doubleList.hapusMahasiswa(201);
    doubleList.tampilkanMahasiswa();
    
    return 0;
}