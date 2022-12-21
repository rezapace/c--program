#include <stdio.h>

// Fungsi untuk menghitung luas segitiga
float hitungLuasSegitiga(float alas, float tinggi) {
	return alas * tinggi / 2;
}

int main() {
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

// Program ini menghitung luas segitiga dengan menggunakan fungsi hitungLuasSegitiga(). Fungsi ini
// memiliki dua parameter, yaitu alas dan tinggi, yang merupakan nilai dari alas dan tinggi segitiga yang
// akan dihitung luasnya. Fungsi ini mengembalikan hasil dari perkalian alas dan tinggi dibagi 2.

// Dalam main(), program ini meminta input dari pengguna untuk alas dan tinggi segitiga, kemudian
// menggunakan fungsi hitungLuasSegitiga() untuk menghitung luas segitiga dengan nilai alas dan tinggi
// yang dimasukkan. Hasil dari perhitungan luas disimpan dalam variabel luas, dan kemudian
// ditampilkan ke layar.

// Setelah menampilkan hasil perhitungan, program ini kemudian akan selesai dan mengembalikan nilai
// 0 sebagai indikasi bahwa program berjalan dengan baik.