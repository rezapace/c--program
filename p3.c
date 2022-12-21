#include <stdio.h>

int main()
{
    // Perulangan untuk mengecek setiap bilangan dari 1-100
    for (int i = 1; i <= 100; i++)
    {
        // Cek apakah bilangan tersebut ganjil
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

// Pada baris pertama, program mengimport library stdio.h yang dibutuhkan untuk menggunakan
// perintah printf().

// Pada baris ke-6 hingga 9, program menggunakan perulangan for untuk mengecek setiap bilangan dari
// 1-100. Pada setiap iterasi, program akan memeriksa apakah bilangan tersebut ganjil atau tidak
// menggunakan operator modulo %. Jika ya, maka program akan menampilkan bilangan tersebut ke
// layar menggunakan printf().

// Pada baris ke-10, program akan mengembalikan nilai 0 sebagai indikator bahwa program telah selesai
// dieksekusi dengan sukses.