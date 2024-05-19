#include <iostream>
#include <stack> // Library untuk menggunakan stack

using namespace std;

int main() {
    stack<int> myStack; // Mendeklarasikan stack bernama myStack yang berisi integer

    // Memasukkan elemen ke dalam stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Mengakses elemen teratas dari stack dan menghapusnya
    cout << "Elemen Teratas: " << myStack.top() << endl; // Menampilkan elemen teratas dari stack
    myStack.pop(); // Menghapus elemen teratas dari stack

    // Menampilkan ukuran stack
    cout << "Ukuran Stack: " << myStack.size() << endl;

    // Memeriksa apakah stack kosong atau tidak
    if (myStack.empty()) {
        cout << "Stack Kosong." << endl;
    } else {
        cout << "Stack Tidak Kosong." << endl;
    }

    return 0;
}

