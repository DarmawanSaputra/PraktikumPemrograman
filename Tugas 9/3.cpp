#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() {
	//Inisialisasi nilai variabel angka
	int angka = 3;
	
	//Looping pertama untuk menampilkan 10 baris
	for(int i = 1; i <= 10; i++) {
		
		//Looping kedua untuk menampilkan i kolom tiap 1 baris (jumlah kolom mengikuti nilai i)
		for(int j = 0; j < i; j++) {
			
			//Menampilkan nilai
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(2) menandakan panjang setiap cout adalah 2 karakter,
				sehingga output menjadi rapi
			*/
			cout<<setw(2)<<angka + j<<" ";
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
		
		//Setiap selesai melooping kolom, tambah 2 nilai variabel angka
		angka += 2;
	}
}
