#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

//Fungsi untuk membentuk array
int** getArrayElement() {
	//Membuat array 2 dimensi
	int** arr = new int*[10];
	
	for(int i = 0; i < 10; i++) {
		arr[i] = new int[10];
		
		for(int j = 0; j < 10; j++) {
			
			//Mengisi array dengan nilai hasil perkalian i dan j
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
	
	//Mengembalikan nilai array
	return arr;
}

main() {
	//Mendapatkan array element dari fungsi
	int** arr = getArrayElement();
	
	//Looping pertama untuk menampilkan 10 baris
	for(int i = 0; i < 10; i++) {
		
		//Looping kedua untuk menampilkan 10 kolom tiap 1 baris
		for(int j = 0; j < 10; j++) {
			
			//Menampilkan element array
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(4) menandakan panjang setiap cout adalah 4 karakter,
				sehingga output tabel perkalian menjadi rapi
			*/
			cout<<setw(4)<<arr[i][j];
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
