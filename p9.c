#include <stdio.h>

int main() {
  // Perulangan untuk mengecek setiap bilangan dari 1-75
  for (int i = 1; i <= 75; i++) {
    // Cek apakah bilangan tersebut genap
    if (i%2 == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}

// Pada kode di atas, kita memiliki sebuah fungsi main yang menampilkan semua bilangan genap dari 1
// hingga 75. Kita melakukan perulangan dari 1 hingga 75, lalu mengecek apakah bilangan tersebut
// genap dengan menggunakan operator modulo %. Jika bilangan tersebut genap, maka kita
// menampilkannya ke layar. Berikut adalah urutan logika dari kode tersebut:

// Deklarasi variabel i untuk menyimpan bilangan saat ini.
// Mulai perulangan dari 1 hingga 75.
// Pada setiap iterasi, cek apakah bilangan tersebut genap dengan menggunakan operator modulo %.
// Jika bilangan tersebut genap, tampilkan ke layar.
// Lanjutkan ke iterasi berikutnya.
// Setelah perulangan selesai, selesai.