#include <stdio.h>

// Fungsi untuk menghitung luas persegi
float hitungLuasPersegi(float panjang, float lebar) {
  return panjang * lebar;
}

int main() {
  // Deklarasi variabel panjang dan lebar
  float panjang, lebar;
  printf("Masukkan panjang persegi: ");
  scanf("%f", &panjang);
  printf("Masukkan lebar persegi: ");
  scanf("%f", &lebar);

  // Hitung luas persegi
  float luas = hitungLuasPersegi(panjang, lebar);

  // Tampilkan hasil
  printf("Luas persegi: %f\n", luas);

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi bernama hitungLuasPersegi yang digunakan untuk
// menghitung luas persegi dengan panjang dan lebar yang diberikan. Pada fungsi main, kita meminta
// input dari pengguna untuk panjang dan lebar persegi, lalu menggunakan fungsi hitungLuasPersegi
// untuk menghitung luas persegi. Hasilnya kemudian ditampilkan ke layar. Berikut adalah urutan logika
// dari kode tersebut:

// Deklarasi variabel panjang, lebar, dan luas.
// Tampilkan pesan ke layar untuk meminta input panjang persegi.
// Baca input panjang persegi dari pengguna dan simpan di variabel panjang.
// Tampilkan pesan ke layar untuk meminta input lebar persegi.
// Baca input lebar persegi dari pengguna dan simpan di variabel lebar.
// Hitung luas persegi dengan menggunakan fungsi hitungLuasPersegi dan simpan hasilnya di variabel
// luas.
// Tampilkan hasil perhitungan luas persegi ke layar.
// Selesai.