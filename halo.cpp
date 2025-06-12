#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];

    nama[0] = "rayhan";
    nama[1] = "fadli";
    nama[2] = "ijan";
    nama[3] = "raka";
    nama[4] = "anshari";

 cout << "Daftar Nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}

