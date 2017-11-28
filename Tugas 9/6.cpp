#include<iostream>
using namespace std;

//Fungsi untuk membentuk array
int** getArrayElement(int n) {
	//Membuat array 2 dimensi
	int** arr = new int*[2*n-1];
	
	//Set angka awal bernilai variabel n
	int angka = n;
	
	//Variabel untuk merubah nilai yang awalnya menurun ke menaik
	bool flip = false;
	
	/*
		For pertama untuk meloop baris
		Rumus mencari barisnya yaitu 2n-1
	*/
	for(int i = 0; i < (2*n-1); i++) {
		arr[i] = new int[2*n-1];
		
		/*
			For kedua untuk meloop kolom
			Rumus mencari kolomnya yaitu 2n-1
		*/
		for(int j = 1; j <= (2*n-1); j++) {		
			arr[i][j] = angka;
		}
		
		//Mengecek nilai, jika angka == 1, maka prosesnya diubah menjadi menaik (increment)
		if(angka == 1)
			flip = !flip;
		
		//Jika tidak flip (false)
		if(!flip)
			angka--; //Maka nilai angka menurun (decrement)
		
		//Jika tidak
		else
			angka++; //Maka nilai angka menaik (increment)
	}
	
	//Mengembalikan nilai array
	return arr;
}

main() {
	//Variabel menyimpan nilai dari user
	int n;
	
	//Input user
	cout<<"Masukkan nilai n : ";
	cin>>n;
	
	//Mendapatkan array element dari fungsi
	int** arr = getArrayElement(n);
	
	//Looping baris
	for(int i = 0; i < (2*n-1); i++) {
		//Looping kolom
		for(int j = 1; j <= (2*n-1); j++) {			
			cout<<arr[i][j];
		}
		
		//Membuat baris baru setelah melooping semua kolom
		cout<<endl;
	}
}
