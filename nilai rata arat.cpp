#include <iostream>
#include <string>
#include <iomanip>  // Untuk setprecision

using namespace std;

int main() {
    // Deklarasi variabel
    string namaSiswa;
    float nilaiBin, nilaiBing, nilaiMatematika, nilaiProkduktif;
    float rataRata;

    // Input nama siswa
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);

    // Input nilai untuk 4 mata pelajaran
    cout << "Masukkan nilai Bahasa Indonesia: ";
    cin >> nilaiBin;

    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> nilaiBing;

    cout << "Masukkan nilai Matematika: ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai Prokduktif: ";
    cin >> nilaiProkduktif;

    // Menghitung rata-rata
    rataRata = (nilaiBin + nilaiBing + nilaiMatematika + nilaiProkduktif) / 4;

    // Menampilkan hasil
    cout << "\n----- Rapor Siswa Semester 1 -----" << endl;
    cout << "Nama Siswa     : " << namaSiswa << endl;
    cout << "Nilai Bahasa Indonesia : " << nilaiBin << endl;
    cout << "Nilai Bahasa Inggris     : " << nilaiBing << endl;
    cout << "Nilai Matematika      : " << nilaiMatematika << endl;
    cout << "Nilai Prokduktif    : " << nilaiProkduktif << endl;

    cout << fixed << setprecision(2);  // Menampilkan 2 angka di belakang koma
    cout << "Rata-rata nilai  : " << rataRata << endl;

    return 0;
}