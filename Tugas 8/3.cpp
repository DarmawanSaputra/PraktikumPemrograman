#include <iostream>
using namespace std;

/*
	Find the first 'n' fibonacci numbers and display them (where n is entered by the user).
	Then calculate the average of these 'n' fibonacci numbers and display it. 
	
	Enter how many fibonacci numbers you want: 20
	Your fibonacci numbers are:  1  1  2  3  5  8  13  21  34  55  89  144  233  377  610  987  1597  2584  4181  6765
	Their average is: 885 
*/

//Fungsi untuk mendapatkan list bilangan fibonacci
int* getFibonacci(int n) {
	int* fibbo = new int[n];
	
	int temp;
	for(int i = 0; i < n; i++) {
		if(i == 0 || i == 1)
			temp = 1;
		else
			temp = fibbo[i - 2] + fibbo[i - 1];
		
		fibbo[i] = temp;
	}
	
	return fibbo;
}

//Fungsi untuk mendapatkan nilai rata rata dari array
float getAverage(int n) {
	int sum = 0;
	int* fibbo = getFibonacci(n);
	
	for(int i = 0; i < n; i++) {
		sum += fibbo[i];
	}
	
	delete[] fibbo;
	
	return sum / n;
}

main() {
	int n;
	
	cout<<"Masukkan n: ";
	cin>>n;
	
	cout<<endl;
	
	int* fibbo = getFibonacci(n);
	
	//For untuk menampilkan daftar fibonacci
	for(int i = 0; i < n; i++) {
		cout<<fibbo[i]<<endl;
	}
	
	//Memanggil fungsi untuk mendapatkan rata ratanya
	cout<<endl<<"Rata ratanya: "<<getAverage(n);
	
	delete[] fibbo;
}
