#include <iostream>     //LIBRARY INPUT OUTPUT
using namespace std;    //AGAR TIDAK PERLU MENULIS std::

//PROSEDUR MENGHITUNG VOL.BALOK DENGAN PARAMETER P, L, T
void hitungVolumeBalok(double p, double l, double t) {
    double volume;    //DEKLARASI VARIABEL BALOK

    volume = p * l * t;   //RUMUS VOLUME BALOK

    cout << "=============================";                            //OUTPUT HASIL AKHIR
    cout << "\nVolume balok adalah: " << volume << " (m^3)" << endl;    //OUTPUT HASIL AKHIR
    cout << "=============================";                            //OUTPUT HASIL AKHIR
}

int main() {   //FUNGSI UTAMA PROGRAM
    double panjang, lebar, tinggi;    //DEKLARASI VARIABEL INPUT

    cout << "=============================";           //JUDUL
    cout << "\n==      Kelompok Duwa      ==";         //JUDUL
    cout << "\n==   Hitung Volume Balok   ==";         //JUDUL
    cout << "\n=============================";         //JUDUL

    cout << "\nMasukkan panjang (m): ";          //INPUT PANJANG
    cin >> panjang;                              //KODE 

    cout << "Masukkan lebar (m): ";         //INPUT LEBAR
    cin >> lebar;                           //KODE

    cout << "Masukkan tinggi (m): ";         //INPUT TINGGI
    cin >> tinggi;                           //KODE

    hitungVolumeBalok(panjang, lebar, tinggi);   //MEMANGGIL PROSEDUR DAN MENGIRIM NILAI 

    return 0; //MENANDAKAN PROGRAM SELESAI TANPA ERROR
}
