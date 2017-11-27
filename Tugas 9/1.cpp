#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() {
	//Looping pertama untuk menampilkan 10 baris
	for(int i = 1; i <= 10; i++) {
		
		//Looping kedua untuk menampilkan 10 kolom tiap 1 baris
		for(int j = 1; j <= 10; j++) {
			
			//Menampilkan hasil perkalian i dan j untuk membentuk tabel perkalian
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(4) menandakan panjang setiap cout adalah 4 karakter,
				sehingga output tabel perkalian menjadi rapi
			*/
			cout<<setw(4)<<i * j;
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
