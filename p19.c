#include <stdio.h>
#include <time.h>

int main() {
	int i;
	time_t start = time(NULL);
	for (i = 1; i <= 1000000; i++) {
	}
	time_t end = time(NULL);
	double elapsed = difftime(end, start);
	printf("Waktu yang dibutuhkan adalah %f detik\n", elapsed);

	return 0;
}

// Berikut ini adalah langkah-langkah logika yang terdapat dalam program tersebut:
// 1.Deklarasikan variabel i sebagai variabel untuk indeks pengulangan.
// 2.Dapatkan waktu saat ini dengan menggunakan time(NULL), lalu simpan hasilnya dalam variabel start.
// 3.Lakukan pengulangan dari 1 hingga 1 juta.
// 4.Dapatkan waktu saat ini lagi dengan menggunakan time(NULL), lalu simpan hasilnya dalam variabel end.
// 5.Hitung selisih waktu antara end dan start menggunakan difftime, lalu simpan hasilnya dalam variabel elapsed.
// 6.Tampilkan pesan "Waktu yang dibutuhkan adalah %f detik\n", lalu sisipkan nilai dari variabel elapsed ke dalam pesan tersebut.
// 7.Kembalikan nilai 0 dari fungsi main untuk menandakan bahwa program berjalan dengan sukses.
