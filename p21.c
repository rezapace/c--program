#include <stdio.h>

int main() {
	// Perulangan untuk mengecek setiap bilangan dari 1-75
	for (int i = 1; i <= 75; i++) {
		// Cek apakah bilangan tersebut ganjil
		if (i%2 != 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}

// Pada program di atas, kode for (int i = 1; i <= 75; i++) digunakan untuk melakukan perulangan
// sebanyak 75 kali, dimulai dari 1. Setiap perulangan, nilai dari variabel i akan ditambah 1.
// Kemudian, pada bagian if (i%2 != 0), akan dicek apakah nilai dari variabel i habis dibagi 2 atau tidak.
// Jika tidak habis dibagi 2, maka nilai dari i akan dicetak ke layar menggunakan perintah printf("%d\n",
// i);. Karena hanya bilangan ganjil yang tidak habis dibagi 2, maka hanya bilangan ganjil yang akan
// ii)dicetak ke layar.
// iii)Setelah perulangan selesai, program akan mengembalikan nilai 0 yang menandakan bahwa
// iv)program berjalan dengan baik.
