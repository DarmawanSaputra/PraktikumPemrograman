#include <iostream>
using namespace std;

/*
	Write a program to display n prime number.
	Input: 2
	Output: 
		2 
		3 
		
	Input: 5 
	Output:  
		2 
		3 
		5 
		7 
		11
*/

//Fungsi untuk mengecek apakah bilangan itu prima atau tidak
bool isPrime(int num) {
	bool prime = false;
	
	if(num == 2 || num == 3 || num == 5 || num == 7)
		prime = true;
	else if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
		prime = true;
		
	return prime;
}

//Fungsi untuk membuat array bilangan prima
int* getPrime(int n) {
	int count = 0;
	int* prime = new int[n];
	
	for(int i = 1; count < n; i++) {
		if(isPrime(i)) {
			prime[count] = i;
			count++;
		}
	}
	
	return prime;
}

main() {
	int n;
	
	cout<<"Masukkan n prima: ";
	cin>>n;
	
	//Memanggil fungsi untuk mendapatkan bilagan prima
	int* prima = getPrime(n);
	
	cout<<endl<<"List bilagan prima:"<<endl;
	
	//Display
	for(int i = 0; i < n; i++) {
		cout<<prima[i]<<endl;
	}
}
