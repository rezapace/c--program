#include <stdio.h>

int main() {
	int panjang, lebar;
	printf("Masukkan panjang persegi panjang: ");
	scanf("%d", &panjang);
	printf("Masukkan lebar persegi panjang: ");
	scanf("%d", &lebar);

	int luas = panjang * lebar;
	printf("Luas persegi panjang adalah %d\n", luas);

	return 0;
}

// Berikut ini adalah langkah-langkah logika yang terdapat dalam program tersebut:

// Deklarasikan variabel panjang dan lebar sebagai variabel untuk menyimpan input dari pengguna.
// Tampilkan pesan "Masukkan panjang persegi panjang: " ke layar untuk meminta input dari pengguna.
// Baca input dari pengguna dan simpan dalam variabel panjang menggunakan scanf.
// Tampilkan pesan "Masukkan lebar persegi panjang: " ke layar untuk meminta input dari pengguna.
// Baca input dari pengguna dan simpan dalam variabel lebar menggunakan scanf.
// Hitung luas persegi panjang dengan mengalikan panjang dengan lebar, lalu simpan hasilnya dalam
// variabel luas.
// Tampilkan pesan "Luas persegi panjang adalah %d\n", lalu sisipkan nilai dari variabel luas ke dalam
// pesan tersebut.
// Kembalikan nilai 0 dari fungsi main untuk menandakan bahwa program berjalan dengan sukses.