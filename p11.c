#include <stdio.h>

int main() {
  // Deklarasi suku pertama dan suku kedua
  int suku1 = 6;
  int suku2 = 9;

  // Tampilkan suku pertama dan kedua
  printf("%d\n", suku1);
  printf("%d\n", suku2);

  // Perulangan untuk menghitung bilangan fibonacci selanjutnya
  for (int i = 1; i <= 3; i++) {
    // Hitung suku selanjutnya
    int sukuSelanjutnya = suku1 + suku2;

    // Tampilkan suku selanjutnya
    printf("%d\n", sukuSelanjutnya);

    // Set suku1 menjadi suku2 dan suku2 menjadi suku selanjutnya
    suku1 = suku2;
    suku2 = sukuSelanjutnya;
  }

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi main yang menampilkan suku pertama dan kedua dari
// deret bilangan fibonacci, lalu menghitung tiga suku selanjutnya dari deret tersebut. Kita memulai
// dengan mendeklarasikan suku pertama dan suku kedua, kemudian menampilkannya ke layar. Setelah
// itu, kita melakukan perulangan untuk menghitung tiga suku selanjutnya dari deret fibonacci. Setiap
// suku selanjutnya dihitung dengan menjumlahkan suku pertama dan kedua, lalu ditampilkan ke layar.
// Setelah itu, suku pertama dan kedua di-set menjadi suku kedua dan suku selanjutnya, sehingga kita
// dapat menghitung suku selanjutnya pada iterasi berikutnya. Berikut adalah urutan logika dari kode
// tersebut:

// Deklarasi variabel suku1, suku2, dan sukuSelanjutnya.
// Tampilkan suku pertama dan kedua ke layar.
// Mulai perulangan sebanyak 3 kali.
// Pada setiap iterasi, hitung suku selanjutnya dari deret fibon