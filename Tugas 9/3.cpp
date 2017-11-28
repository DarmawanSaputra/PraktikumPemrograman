#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

//Fungsi untuk membentuk array
int** getArrayElement() {
	//Membuat array 2 dimensi
	int** arr = new int*[10];
	
	//Inisialisasi nilai variabel angka
	int angka = 3;
	
	for(int i = 0; i < 10; i++) {
		arr[i] = new int[10];
		
		for(int j = 0; j < 10; j++) {
			
			//Mengisi array
			arr[i][j] = angka + j;
		}
		
		//Setiap selesai melooping kolom, tambah 2 nilai variabel angka
		angka += 2;
	}
	
	//Mengembalikan nilai array
	return arr;
}

main() {
	//Mendapatkan array element dari fungsi
	int** arr = getArrayElement();
	
	//Looping pertama untuk menampilkan 10 baris
	for(int i = 0; i < 10; i++) {
		
		//Looping kedua untuk menampilkan i kolom tiap 1 baris (jumlah kolom mengikuti nilai i)
		for(int j = 0; j <= i; j++) {
			
			//Menampilkan nilai
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(2) menandakan panjang setiap cout adalah 2 karakter,
				sehingga output menjadi rapi
			*/
			cout<<setw(2)<<arr[i][j]<<" ";
		}
		
		//Membuat baris baru setelah looping kolom
		cout<<endl;
	}
}
