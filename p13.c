#include <stdio.h>

int main() {
  // Deklarasi variabel tinggi
  int tinggi;

  // Meminta input tinggi segitiga dari user
  printf("Masukkan tinggi segitiga: ");
  scanf("%d", &tinggi);

  // Perulangan untuk membuat segitiga full
  for (int brs = 1; brs <= tinggi; brs++) {
    // Perulangan untuk menampilkan spasi pada setiap baris
    for (int spasi = 30; spasi >= brs; spasi--) {
      printf(" ");
    }

    // Perulangan untuk menampilkan bintang pada bagian kiri segitiga
    for (int klm = 1; klm <= brs; klm++) {
      printf("*");
    }

    // Perulangan untuk menampilkan bintang pada bagian kanan segitiga
    for (int klm = (brs - 1); klm >= 1; klm--) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi main yang meminta input tinggi segitiga dari user,
// kemudian menampilkan segitiga full dengan tinggi yang sesuai dengan input user. Kita memulai
// dengan meminta input tinggi segitiga dari user, kemudian melakukan perulangan untuk menampilkan
// segitiga full. Setiap baris segitiga dibuat dengan menggunakan beberapa perulangan yang
// menampilkan spasi, bintang pada bagian kiri segitiga, dan bintang pada bagian kanan segitiga. Berikut
// adalah urutan logika dari kode tersebut:

// Meminta input tinggi segitiga dari user.
// Mulai perulangan sebanyak tinggi segitiga.
// Pada setiap iterasi, mulai perulangan untuk menampilkan spasi sebanyak 30 kali, kecuali untuk baris
// terakhir.
// Setelah spasi ditampilkan, mulai perulangan untuk menampilkan bintang pada bagian kiri segitiga
// sebanyak jumlah baris yang sedang dibuat.
// Setelah bintang pada bagian kiri ditampilkan, mulai perulangan untuk menampilkan bintang pada
// bagian kanan segitiga sebanyak jumlah baris yang sedang dibuat dikurangi 1.
// Setelah seluruh bintang pada baris tersebut ditampilkan, tampilkan baris baru.
// Lanjutkan ke iterasi berikutnya.
// Setelah perulangan selesai, selesai.