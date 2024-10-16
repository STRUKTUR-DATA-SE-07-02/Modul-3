#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Fungsi untuk menambahkan elemen di akhir list
    void append(int X) {
        Node* newNode = new Node();
        newNode->data = X;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Fungsi untuk mencari elemen dengan nilai X
    bool search(int X) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == X) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Fungsi untuk menghapus elemen dengan kondisi tertentu
    void deleteAfter(int X) {
        if (head == nullptr) {
            cout << "List kosong\n";
            return;
        }

        if (head->data == X) {
            // Jika X ada di elemen pertama, hapus elemen pertama
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Elemen pertama dihapus.\n";
        } else {
            Node* current = head;
            Node* previous = nullptr;

            // Mencari elemen X
            while (current != nullptr && current->data != X) {
                previous = current;
                current = current->next;
            }

            if (current == nullptr) {
                // Jika X tidak ditemukan
                cout << "Elemen dengan nilai " << X << " tidak ditemukan.\n";
                return;
            }

            if (current->next == nullptr) {
                // Jika X berada di elemen terakhir, hapus elemen terakhir
                previous->next = nullptr;
                delete current;
                cout << "Elemen terakhir dihapus.\n";
            } else {
                // Jika X tidak di awal atau di akhir, hapus elemen setelah X
                Node* temp = current->next;
                current->next = temp->next;
                delete temp;
                cout << "Elemen setelah " << X << " dihapus.\n";
            }
        }
    }

    // Fungsi untuk mencetak isi dari list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    // Menambahkan elemen ke dalam list
    list.append(15);
    list.append(30);
    list.append(40);
    list.append(50);

    cout << "Isi list:\n";
    list.printList();

    // Mencari elemen dan menghapus elemen sesuai kondisi
    int X;
    cout << "Masukkan nilai X yang akan dicari: ";
    cin >> X;

    if (list.search(X)) {
        list.deleteAfter(X);
    } else {
        cout << "Elemen dengan nilai " << X << " tidak ditemukan.\n";
    }

    cout << "Isi list setelah operasi:\n";
    list.printList();

    return 0;
}
