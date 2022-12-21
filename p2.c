#include <stdio.h>

int main()
{
    // Deklarasi variabel nilai
    int nilai;
    printf("Masukkan nilai Anda: ");
    scanf("%d", &nilai);

    // Cek apakah nilai lebih besar atau sama dengan 50
    if (nilai >= 50)
    {
        printf("Nilai Anda: %d\n", nilai);
    }
    else
    {
        printf("Maaf, Anda tidak lulus\n");
    }

    return 0;
}

// Pada baris pertama, program mengimport library stdio.h yang dibutuhkan untuk menggunakan
// perintah printf() dan scanf().

// Pada baris ke-6, program menyatakan variabel nilai sebagai tipe integer.

// Pada baris ke-8, program menampilkan pesan "Masukkan nilai Anda: " ke layar menggunakan printf().

// Pada baris ke-9, program membaca input dari user menggunakan scanf() dan menyimpan nilai
// tersebut ke dalam variabel nilai.

// Pada baris ke-12 hingga 15, program menggunakan percabangan if-else untuk menentukan apakah
// nilai yang dimasukkan oleh user lebih besar atau sama dengan 50. Jika ya, maka program akan
// menampilkan "Nilai Anda: <nilai>" ke layar. Jika tidak, program akan menampilkan "Maaf, Anda tidak
// lulus" ke layar.

// Pada baris ke-16, program akan mengembalikan nilai 0 sebagai indikator bahwa program telah selesai
// dieksekusi dengan sukses.