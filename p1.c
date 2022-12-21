#include <stdio.h>

int main()
{
    // Deklarasi variabel mutu
    int mutu;
    printf("Masukkan nilai mutu: ");
    scanf("%d", &mutu);

    // Percabangan if-else
    if (mutu <= 40)
    {
        printf("Nilai mutu Anda: D\n");
    }
    else if (mutu <= 60)
    {
        printf("Nilai mutu Anda: C\n");
    }
    else if (mutu <= 80)
    {
        printf("Nilai mutu Anda: B\n");
    }
    else
    {
        printf("Nilai mutu Anda: A\n");
    }

    return 0;
}

// Pada baris pertama, program mengimport library stdio.h yang dibutuhkan untuk menggunakan
// perintah printf() dan scanf().

// Pada baris ke-6, program menyatakan variabel mutu sebagai tipe integer.

// Pada baris ke-8, program menampilkan pesan "Masukkan nilai mutu: " ke layar menggunakan printf().

// Pada baris ke-9, program membaca input dari user menggunakan scanf() dan menyimpan nilai
// tersebut ke dalam variabel mutu.

// Pada baris ke-12 hingga 19, program menggunakan percabangan if-else untuk menentukan nilai mutu
// berdasarkan batas yang ditentukan. Jika nilai mutu kurang atau sama dengan 40, maka program akan
// menampilkan "Nilai mutu Anda: D" ke layar. Jika nilai mutu lebih dari 40 tapi kurang atau sama
// dengan 60, maka program akan menampilkan "Nilai mutu Anda: C" ke layar. Dan seterusnya.

// Pada baris ke-20, program akan mengembalikan nilai 0 sebagai indikator bahwa program telah selesai
// dieksekusi dengan sukses.