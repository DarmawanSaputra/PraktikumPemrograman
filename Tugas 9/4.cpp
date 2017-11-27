#include<iostream>
using namespace std;

main() {
	//Looping pertama untuk menampilkan 5 baris dimulai dari i = 2 sampai i <= 6
	for(int i = 2; i <= 6; i++) {
		
		//Looping kedua untuk menampilkan 5 kolom tiap 1 baris
		for(int j = 0; j < 5; j++) {
			
			//Menampilkan nilai
			cout<<i + j<<" ";
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
