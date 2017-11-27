#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() {
	//Looping pertama untuk menampilkan 10 baris
	for(int i = 1; i <= 10; i++) {
		
		//Looping kedua untuk menampilkan i kolom tiap 1 baris (jumlah kolom mengikuti nilai i)
		for(int j = 1; j <= i; j++) {
			
			//Menampilkan nilai
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(3) menandakan panjang setiap cout adalah 3 karakter,
				sehingga output menjadi rapi
			*/
			cout<<setw(3)<<i * j<<" ";
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
