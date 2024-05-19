#include <iostream>
#include <queue> // Library untuk menggunakan queue

using namespace std;

int main() {
    queue<int> antrianSaya; // Mendeklarasikan queue bernama antrianSaya yang berisi integer

    // Memasukkan elemen ke dalam queue
    antrianSaya.push(5);
    antrianSaya.push(10);
    antrianSaya.push(15);

    // Mengakses elemen terdepan dari queue dan menghapusnya
    cout << "Elemen terdepan: " << antrianSaya.front() << endl; // Menampilkan elemen terdepan dari queue
    antrianSaya.pop(); // Menghapus elemen terdepan dari queue

    // Menampilkan ukuran queue
    cout << "Ukuran queue: " << antrianSaya.size() << endl;

    // Memeriksa apakah queue kosong atau tidak
    if (antrianSaya.empty()) {
        cout << "Queue kosong." << endl;
    } else {
        cout << "Queue tidak kosong." << endl;
    }

    return 0;
}

