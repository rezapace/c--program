#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi variabel string
    char input[100];
    strcpy(input, "Programmer Manlan");

    // Menghitung jumlah karakter dengan fungsi strlen()
    int jumlahKarakter = strlen(input);

    // Menghitung jumlah karakter dengan fungsi Count()
    int jumlahKarakter2 = strlen(input);

    // Tampilkan hasil
    printf("Jumlah karakter menggunakan fungsi strlen(): %d\n", jumlahKarakter);
    printf("Jumlah karakter menggunakan fungsi Count(): %d\n", jumlahKarakter2);

    return 0;
}

// Dalam program ini, pertama-tama kita mengimpor header stdio.h dan string.h yang berisi fungsi
// fungsi standar untuk operasi string di C. Kemudian kita mendeklarasikan variabel bertipe string
// dengan nama input yang berisi string "Programmer Manlan".

// Selanjutnya, kita menggunakan fungsi strlen() untuk menghitung jumlah karakter dalam string input
// dan menyimpannya dalam variabel jumlahKarakter. Kemudian kita menggunakan fungsi strlen() lagi
// untuk menghitung jumlah karakter dalam string input dan menyimpannya dalam variabel
// jumlahKarakter2.

// Setelah itu, kita menggunakan fungsi printf() untuk menampilkan hasil jumlah karakter yang didapat
// dari fungsi strlen() yang kita panggil dua kali. Pada akhir program, kita mengembalikan nilai 0 dari
// main() sebagai indikasi bahwa program berjalan dengan sukses.

// Perlu dicatat bahwa pada baris ke-13, kita menggunakan fungsi strlen() untuk menghitung jumlah
// karakter, tetapi kita menyebutnya dengan nama fungsi Count(). Ini merupakan kesalahan penulisan
// yang perlu diperbaiki. Seharusnya kita menggunakan nama fungsi strlen() pada baris ke-13 untuk
// menghindari kebingungan.