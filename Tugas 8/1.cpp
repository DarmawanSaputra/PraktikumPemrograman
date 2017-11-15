#include <iostream>
using namespace std;

/*
	User input integer values in 10 cells array. He wants to find product of greatest and smallest number present in array.
	
	Example:
	Input: 3  2  4  5  6  8  9  7 -1  10
	
	Output:
		Terbesar: 10
		Terkecil:-1
*/

//Fungsi untuk mencari nilai terbesar dari sebuah array
int max(int angka[]) {
	int terbesar;
	
	for(int i = 0; i < 10; i++) {
		if(i == 0 || angka[i] > terbesar)
			terbesar = angka[i];
	}
	
	return terbesar;
}

//Fungsi untuk mencari nilai terkecil dari sebuah array
int min(int angka[]) {
	int terkecil;
	
	for(int i = 0; i < 10; i++) {
		if(i == 0 || angka[i] < terkecil)
			terkecil = angka[i];
	}
	
	return terkecil;
}

main() {
	int angka[10];
	
	//Proses inisialisasi array angka dari user
	for(int i = 0; i < 10; i++) {
		cout<<"Masukkan angka ke-"<<i + 1<<": ";
		cin>>angka[i];
	}
	
	//Proses menampilkan nilai terbesar
	cout<<"Angka terbesar: "<<max(angka)<<endl;
	
	//Proses menampilkan nilai terkecil
	cout<<"Angka terkecil: "<<min(angka)<<endl;
}
