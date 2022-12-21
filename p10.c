#include <stdio.h>

int main() {
  // Membuat array dengan nama-nama hari
  char* hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

  // Perulangan untuk menampilkan nama hari
  for (int i = 0; i < 7; i++) {
    printf("Hari ke %d adalah hari %s\n", i+1, hari[i]);
  }

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi main yang menampilkan nama hari dari hari Senin
// hingga Minggu. Kita membuat sebuah array bernama hari yang berisi nama-nama hari, lalu
// menggunakan perulangan for untuk menampilkan nama hari satu per satu. Berikut adalah urutan
// logika dari kode tersebut:

// Deklarasi array hari yang berisi nama-nama hari.
// Mulai perulangan dari 0 hingga 6 (7 hari).
// Pada setiap iterasi, tampilkan nama hari yang sesuai dengan indeks array.
// Lanjutkan ke iterasi berikutnya.
// Setelah perulangan selesai, selesai.