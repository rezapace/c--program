#include <stdio.h>

int main() {
	// Deklarasi variabel
	char npm[10], nama[30], alamat[50], jurusan[20];

	printf("Masukkan npm     : ");
	scanf("%s", npm);
	printf("Masukkan nama    : ");
	scanf("%s", nama);
	printf("Masukkan alamat  : ");
	scanf("%s", alamat);
	printf("Masukkan jurusan : ");
	scanf("%s", jurusan);

	printf("Npm     : %s\n", npm);
	printf("Nama    : %s\n", nama);
	printf("Alamat  : %s\n", alamat);
	printf("Jurusan : %s\n", jurusan);

	return 0;
}

// Pada program di atas, variabel npm, nama, alamat, dan jurusan diinisialisasi sebagai variabel bertipe
// char yang masing-masing memiliki panjang maksimal 10, 30, 50, dan 20 karakter.

// Kemudian, kode printf("Masukkan npm : "); akan mencetak teks "Masukkan npm : " ke layar, dan
// scanf("%s", npm); akan meminta user untuk memasukkan input untuk variabel npm. Proses yang
// sama juga dilakukan untuk variabel nama, alamat, dan jurusan.

// Setelah semua input selesai dimasukkan, semua variabel tersebut akan dicetak ke layar menggunakan
// perintah printf yang sesuai dengan formatnya. Setelah itu, program akan mengembalikan nilai 0 yang
// menandakan bahwa program berjalan dengan baik.