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
	
	//Variabel pembantu
	int t;
	
	/*
		For pertama untuk meloop baris
		Rumus mencari barisnya yaitu 2n-1
	*/
	for(int i = 0; i < (2*n-1); i++) {
		//Flip
		if((2*n-1-i) == n - 1) {
			flip = !flip;
			t = n - 2;
		}
		
		/*
			For kedua untuk meloop kolom
			Rumus mencari kolomnya yaitu 2n-1
		*/
		for(int j = 0; j < (2*n-1); j++) {
			//Proses inc atau dec
			if(!flip) {
				if(n - i <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - i) {
					angka++;
				}
			}
			else {
				if(n - t <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - t) {
					angka++;
				}
			}
			cout<<angka;
		}
		
		//Membuat baris baru setelah melooping semua kolom
		cout<<endl;
		
		//Mereset nilai angka ke nilai n
		angka = n;
		
		//Dec variabel t
		t--;
	}
}
