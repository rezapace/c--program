#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float r) {
  float pi = 3.14;
  return pi * pow(r, 2);
}

int main() {
  // Deklarasi variabel jari-jari
  float r = 7;

  // Hitung luas lingkaran
  float luas = hitungLuasLingkaran(r);

  // Tampilkan hasil
  printf("Luas lingkaran: %f\n", luas);

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi bernama hitungLuasLingkaran yang digunakan untuk
// menghitung luas lingkaran dengan jari-jari yang diberikan. Pada fungsi main, kita menetapkan jari-jari
// lingkaran ke 7, lalu menggunakan fungsi hitungLuasLingkaran untuk menghitung luas lingkaran.
// Hasilnya kemudian ditampilkan ke layar. Berikut adalah urutan logika dari kode tersebut:

// Deklarasi variabel r dan luas.
// Atur jari-jari lingkaran ke 7.
// Hitung luas lingkaran dengan menggunakan fungsi hitungLuasLingkaran dan simpan hasilnya di
// variabel luas.
// Tampilkan hasil perhitungan luas lingkaran ke layar.
// Selesai.