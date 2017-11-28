#include<iostream>
using namespace std;

//Fungsi untuk membentuk array
int* getArrayElement() {
	//Membuat array 1 dimensi
	int* arr = new int[15];
	
	//Inisialiasi nilai angka
	int angka = 2;
	
	for(int i = 0; i < 15; i++) {
		//Mengisi array
		arr[i] = angka;
		
		//Setiap selesai melooping kolom, tambah nilai angka
		angka+=2;
	}
	
	//Mengembalikan nilai array
	return arr;
}

main() {
	//Mendapatkan array element dari fungsi
	int* arr = getArrayElement();
	
	//Looping menampilkan isi array
	for(int i = 0; i < 15; i++) {
		cout<<arr[i]<<" ";
	}
}
