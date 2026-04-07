#include <iostream>
using namespace std;

struct detailAlamat {
    string desa;
    string kota;
};

struct orang {
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    orang mhs;
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    cout << "Alamat Desa : ";
    getline(cin, mhs.alamat.desa);

    cout << "Alamat Kota : ";
    getline(cin, mhs.alamat.kota);

    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
}