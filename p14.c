#include <stdio.h>

int main() {
  // Pendeklarasian variabel
  int angka1, angka2, tambah, kurang, kali, bagi;

  // Input angka
  printf("Masukkan angka pertama : ");
  scanf("%d", &angka1);
  printf("Masukkan angka kedua   : ");
  scanf("%d", &angka2);

  // Proses perhitungan
  tambah = angka1 + angka2;
  kurang = angka1 - angka2;
  kali = angka1 * angka2;
  bagi = angka1 / angka2;

  // Output hasil
  printf("%d + %d = %d\n", angka1, angka2, tambah);
  printf("%d - %d = %d\n", angka1, angka2, kurang);
  printf("%d * %d = %d\n", angka1, angka2, kali);
  printf("%d / %d = %d\n", angka1, angka2, bagi);

  return 0;
}

// Program di atas adalah sebuah kalkulator sederhana yang ditulis dalam bahasa C. Program ini dimulai
// dengan pendeklarasian empat variabel integer bernama angka1, angka2, tambah, kurang, kali, dan
// bagi yang akan digunakan untuk menyimpan nilai dari angka yang diinput oleh user, serta hasil
// perhitungan dari operasi aritmatika yang akan dilakukan. Kemudian, program akan meminta user
// untuk memasukkan dua angka menggunakan perintah scanf(), yang kemudian akan disimpan ke
// dalam variabel angka1 dan angka2. Setelah itu, program akan menghitung hasil dari operasi
// aritmatika penjumlahan, pengurangan, perkalian, dan pembagian antara kedua angka tersebut, dan
// hasilnya akan disimpan ke dalam variabel tambah, kurang, kali, dan bagi secara berurutan. Terakhir,
// program akan menampilkan hasil dari masing-masing operasi tersebut menggunakan perintah printf().
// Program akan berakhir setelah semua perhitungan selesai dilakukan dan hasilnya ditampilkan ke layar.