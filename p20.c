#include <stdio.h>
#include <math.h>

int main() {
	float s;
	printf("Masukkan sisi: ");
	scanf("%f", &s);

	float luas = 6 * powf(s, 2);
	printf("Luas permukaan kubus adalah %f\n", luas);

	return 0;
}

// Berikut ini adalah langkah-langkah logika yang terdapat dalam program tersebut:
// 1.Deklarasikan variabel s sebagai variabel untuk menyimpan input dari pengguna.
// 2.Tampilkan pesan "Masukkan sisi: " ke layar untuk meminta input dari pengguna.
// 3.Baca input dari pengguna dan simpan dalam variabel s menggunakan scanf.
// 4.Hitung luas permukaan kubus dengan menggunakan rumus luas permukaan kubus (6 x sisi kubus^2), lalu simpan hasilnya dalam variabel luas.
// 5.Tampilkan pesan "Luas permukaan kubus adalah %f\n", lalu sisipkan nilai dari variabel luas ke dalam pesan tersebut.
// 6.Kembalikan nilai 0 dari fungsi main untuk menandakan bahwa program berjalan dengan sukses.
