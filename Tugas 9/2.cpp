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
		
		//Looping kedua untuk menampilkan i kolom tiap 1 baris (jumlah kolom mengikuti nilai i)
		for(int j = 0; j <= i; j++) {
			
			//Menampilkan nilai
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(3) menandakan panjang setiap cout adalah 3 karakter,
				sehingga output menjadi rapi
			*/
			cout<<setw(3)<<arr[i][j]<<" ";
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
