#include<iostream>
using namespace std;

//Fungsi untuk membentuk array
int** getArrayElement() {
	//Membuat array 2 dimensi
	int** arr = new int*[5];
	
	//Inisialisasi nilai variabel angka
	int angka = 2;
	
	for(int i = 0; i < 5; i++) {
		arr[i] = new int[5];
		
		for(int j = 0; j < 5; j++) {
			
			//Mengisi array
			arr[i][j] = angka + j;
		}
		
		//Setiap selesai melooping kolom, tambah nilai angka
		angka++;
	}
	
	//Mengembalikan nilai array
	return arr;
}

main() {
	//Mendapatkan array element dari fungsi
	int** arr = getArrayElement();
	
	//Looping pertama untuk menampilkan 5 baris dimulai dari i = 2 sampai i <= 6
	for(int i = 0; i < 5; i++) {
		
		//Looping kedua untuk menampilkan 5 kolom tiap 1 baris
		for(int j = 0; j < 5; j++) {
			
			//Menampilkan nilai
			cout<<arr[i][j]<<" ";
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
