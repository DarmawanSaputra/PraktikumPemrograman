#include <iostream>
using namespace std;

/*
	Complete the following program to find whether given number is perfect or 
	not Help (Perfect number is a positive number which sum of all positive divisors excluding 
	that number is equal to that number).
	
	For example 6 is perfect number since divisor of 6 are 1, 2 and 3. Sum of its divisor is 1 + 2 + 3 = 6.
	
	Note:  
	6 is the smallest perfect number. 
	
	Next perfect number is 28 
	
	Example 1: 
	Enter a number: 6 
	The result is: Given number is a perfect number 
	
	Example 2: 
	Enter a number: 5 
	The result is: Given number is not a perfect number 
*/

//Fungsi untuk mengecek bilagan itu perfect atau tidak
bool perfectCheck(int n) {
	int total = 0;
	
	for(int i = 1; i < n; i++)
		if(n % i == 0)
			total += i;
		
	return total == n;
}

main() {
	int n;
	
	cout<<"Masukkan angka: ";
	cin>>n;
	
	//Memanggil fungsi perfectCheck untuk mendapatkan status bool angka tersebut
	bool status = perfectCheck(n);
	
	if(status)
		cout<<"Given number is a perfect number";
	else
		cout<<"Given number is a not perfect number";
}
