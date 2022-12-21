#include <stdio.h>

int main() {
	int sisi;
	printf("Masukkan sisi persegi: ");
	scanf("%d", &sisi);

	int luas = sisi * sisi;
	printf("Luas persegi adalah %d\n", luas);

	return 0;
}

// Berikut ini adalah langkah-langkah logika yang terdapat dalam program tersebut:

// Deklarasikan variabel sisi sebagai variabel untuk menyimpan input dari pengguna.
// Tampilkan pesan "Masukkan sisi persegi: " ke layar untuk meminta input dari pengguna.
// Baca input dari pengguna dan simpan dalam variabel sisi menggunakan scanf.
// Hitung luas persegi dengan mengalikan sisi dengan sisi, lalu simpan hasilnya dalam variabel luas.
// Tampilkan pesan "Luas persegi adalah %d\n", lalu sisipkan nilai dari variabel luas ke dalam pesan
// tersebut.
// Kembalikan nilai 0 dari fungsi main untuk menandakan bahwa program berjalan dengan sukses.