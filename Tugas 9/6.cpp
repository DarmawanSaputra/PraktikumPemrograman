#include<iostream>
using namespace std;

main() {
	//Variabel menyimpan nilai dari user
	int n;
	
	//Variabel untuk merubah nilai yang awalnya menurun ke menaik
	bool flip = false;
	
	//Input user
	cout<<"Masukkan nilai n : ";
	cin>>n;
	
	//Set angka awal bernilai variabel n
	int angka = n;
	
	/*
		For pertama untuk meloop baris
		Rumus mencari barisnya yaitu 2n-1
	*/
	for(int i = 0; i < (2*n-1); i++) {
		/*
			For kedua untuk meloop kolom
			Rumus mencari kolomnya yaitu 2n-1
		*/
		for(int j = 1; j <= (2*n-1); j++) {			
			cout<<angka;
		}
		
		//Membuat baris baru setelah melooping semua kolom
		cout<<endl;
		
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
}
