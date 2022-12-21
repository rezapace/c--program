#include <stdio.h>

// Fungsi untuk menghitung luas segitiga
float hitungLuasSegitiga(float alas, float tinggi)
{
    return alas * tinggi / 2;
}

int main()
{
    // Deklarasi variabel alas dan tinggi
    float alas, tinggi;
    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    // Hitung luas segitiga
    float luas = hitungLuasSegitiga(alas, tinggi);

    // Tampilkan hasil
    printf("Luas segitiga: %f\n", luas);

    return 0;
}

// Pada baris pertama, program mengimport library stdio.h yang dibutuhkan untuk menggunakan
// perintah printf() dan scanf().

// Pada baris ke-5 hingga 9, program menyatakan fungsi hitungLuasSegitiga() yang menerima dua
// parameter bertipe float yaitu alas dan tinggi, dan mengembalikan nilai sebagai tipe float. Fungsi ini
// digunakan untuk menghitung luas segitiga menggunakan rumus yang sesuai.

// Pada baris ke-12 hingga 16, program menyatakan variabel alas dan tinggi sebagai tipe float. Kemudian,
// program menampilkan pesan "Masukkan alas segitiga: " ke layar menggunakan printf(), dan membaca
// input dari user menggunakan scanf() dan menyimpan nilai tersebut ke dalam variabel alas. Proses
// yang sama juga dilakukan untuk variabel tinggi.

// Pada baris ke-19, program menghitung luas segitiga menggunakan fungsi hitungLuasSegitiga() dan
// menyimpan hasilnya ke dalam variabel luas.

// Pada baris ke-21, program menampilkan pesan "Luas segitiga: <luas>" ke layar menggunakan printf(),
// di mana luas adalah hasil perhitungan sebelumnya.

// Pada baris ke-23, program akan mengem