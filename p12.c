#include <stdio.h>

int main() {
  // Deklarasi variabel tinggi
  int tinggi;

  // Meminta input tinggi segitiga dari user
  printf("Masukkan tinggi segitiga: ");
  scanf("%d", &tinggi);

  // Perulangan untuk membuat segitiga siku-siku
  for (int i = 1; i <= tinggi; i++) {
    // Perulangan untuk menampilkan bintang pada setiap baris
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi main yang meminta input tinggi segitiga dari user,
// kemudian menampilkan segitiga siku-siku dengan tinggi yang sesuai dengan input user. Kita memulai
// dengan meminta input tinggi segitiga dari user, kemudian melakukan perulangan untuk menampilkan
// segitiga siku-siku. Setiap baris segitiga dibuat dengan menggunakan perulangan tambahan yang
// menampilkan bintang sesuai dengan jumlah baris yang sedang dibuat. Berikut adalah urutan logika
// dari kode tersebut:

// Meminta input tinggi segitiga dari user.
// Mulai perulangan sebanyak tinggi segitiga.
// Pada setiap iterasi, mulai perulangan sebanyak jumlah baris yang sedang dibuat.
// Pada setiap iterasi dari perulangan kedua, tampilkan bintang.
// Setelah seluruh bintang pada baris tersebut ditampilkan, tampilkan baris baru.
// Lanjutkan ke iterasi berikutnya.
// Setelah perulangan selesai, selesai.