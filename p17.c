#include <stdio.h>
#include <math.h>

int main() {
	float sudut;
	printf("Masukkan sudut: ");
	scanf("%f", &sudut);

	float sin = sinf(sudut);
	float cos = cosf(sudut);
	float tan = tanf(sudut);

	printf("Nilai sin adalah %f\n", sin);
	printf("Nilai cos adalah %f\n", cos);
	printf("Nilai tan adalah %f\n", tan);

	return 0;
}

// Berikut ini adalah langkah-langkah logika yang terdapat dalam program tersebut:
// 1.Deklarasikan variabel sudut sebagai variabel untuk menyimpan input dari pengguna.
// 2.Tampilkan pesan "Masukkan sudut: " ke layar untuk meminta input dari pengguna.
// 3.Baca input dari pengguna dan simpan dalam variabel sudut menggunakan scanf.
// 4.Hitung nilai sin dari sudut tersebut dengan menggunakan sinf, lalu simpan hasilnya dalam variabel sin.
// 5.Hitung nilai cos dari sudut tersebut dengan menggunakan cosf, lalu simpan hasilnya dalam variabel cos.
// 6.Hitung nilai tan dari sudut tersebut dengan menggunakan tanf, lalu simpan hasilnya dalam variabel tan.
// 7.Tampilkan pesan "Nilai sin adalah %f\n", lalu sisipkan nilai dari variabel sin ke dalam pesan tersebut.
// 8.Tampilkan pesan "Nilai cos adalah %f\n", lalu sisipkan nilai dari variabel cos ke dalam pesan tersebut.
// 9.Tampilkan pesan "Nilai tan adalah %f\n", lalu sisipkan nilai dari variabel tan ke dalam pesan tersebut.
// 10.Kembalikan nilai 0 dari fungsi main untuk menandakan bahwa program berjalan dengan sukses.
