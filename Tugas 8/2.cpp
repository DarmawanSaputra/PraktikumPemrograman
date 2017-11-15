#include <iostream>
using namespace std;

/*
	Ask user for n numbers, store in a array and print the even numbers only.
	If not a single even number is entered print 'Even number not found in array'.
	
	n :5
	angka ke -1:1
	angka ke -2:2 
	angka ke -3:3 
	angka ke -4:4 
	angka ke -5:5 
	Output:  
		2  
		4  
	
	n: 2 
	angka ke-1: 1 
	angka ke-2: 3 
	Output:
		Even number not found in array. 
*/

//Fungsi untuk mencari total bilangan genapnya, untuk menentukan panjang array genap
int getEvenCount(int* angka, int n) {
	int count = 0;
	for(int j = 0; j < n; j++) {
		if(angka[j] % 2 == 0) {
			count++;
		}
	}
	
	return count;
}

//Fungsi untuk memfilter nilai genap dan membuat array baru
int* evenNumberFilter(int* angka, int n) {
	//Memanggil fungsi utk mendapatkan panjang array genap
	int count = getEvenCount(angka, n);
	
	//Proses pembuatan array genap
	int* even = new int[count];
	int i = 0;
	for(int j = 0; j < n; j++) {
		if(angka[j] % 2 == 0) {
			even[i] = angka[j];
			i++;
		}
	}
	
	//Mengembalikan array yg hanya genap
	return even;
}

main() {
	int n;
	
	cout<<"Masukkan n: ";
	cin>>n;
	
	int angka[n];
	
	//Proses inisialisasi angka dari user
	for(int i = 0; i < n; i++) {
		cout<<"Masukkan angka ke-"<<i + 1<<": ";
		cin>>angka[i];
	}
	
	cout<<endl;
	
	//Memanggil fungsi utk mendapatkan panjang array genap
	int count = getEvenCount(angka, n);
	
	//Memanggil fungsi untuk mendapatkan array bilangan genap
	int* genap = evenNumberFilter(angka, n);
	
	//Meloop untuk menampilkan nilai array genap
	for(int i = 0; i < count; i++) {
		cout<<genap[i]<<endl;
	}
	
	//Jika nilai count < 1
	if(count < 1)
		cout<<"Even number not found in array";
	
	//Menghapus alokasi memori
	delete[] genap;
}
