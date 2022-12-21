#include <stdio.h>

int main() {
	int massa, volume;
	printf("Masukkan massa: ");
	scanf("%d", &massa);
	printf("Masukkan volume: ");
	scanf("%d", &volume);

	int masaJenis = massa / volume;
	printf("Masa jenis adalah %d\n", masaJenis);

	return 0;
}

// Berikut ini adalah langkah-langkah logika yang terdapat dalam program tersebut:
// 1.Deklarasikan variabel massa dan volume sebagai variabel untuk menyimpan input dari pengguna.
// 2.Tampilkan pesan "Masukkan massa: " ke layar untuk meminta input dari pengguna.
// 3.Baca input dari pengguna dan simpan dalam variabel massa menggunakan scanf.
// 4.Tampilkan pesan "Masukkan volume: " ke layar untuk meminta input dari pengguna.
// 5.Baca input dari pengguna dan simpan dalam variabel volume menggunakan scanf.
// 6.Hitung masa jenis dengan membagi massa dengan volume, lalu simpan hasilnya dalam variabel masaJenis.
// 7.Tampilkan pesan "Masa jenis adalah %d\n", lalu sisipkan nilai dari variabel masaJenis ke dalam pesan tersebut.
// 8.Kembalikan nilai 0 dari fungsi main untuk menandakan bahwa program berjalan dengan sukses.
