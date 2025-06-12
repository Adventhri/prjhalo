#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;

    cout << "Masukkan jumlah nama yang ingin dimasukkan: ";
    cin >> jumlah;
    cin.ignore(); // Membersihkan newline dari input sebelumnya

    // Menggunakan array dinamis
    string* nama = new string[jumlah];

    // Input nama
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }

    // Output nama
    cout << "\nDaftar Nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    // Dealokasi memori
    delete[] nama;

    return 0;
}
