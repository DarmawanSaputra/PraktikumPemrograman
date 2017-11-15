#include <iostream>
#include <iomanip>
using namespace std;

/*
	Write a program which takes input integer array which contains positive and negative numbers
	and find out the average of positive and average of negative numbers.

	Example:
	If user gives input 9,-1,-1,-4,1,5,-4,2,-3,1 then output will be :
	Average of positive numbers: 3.6
	Average of negative numbers: -2.6
	
	If user gives input 12,4,-5,4,-7,-2,6,14,-8,10 then output will be :
	Average of positive numbers: 8.33
	Average of negative numbers: -5.5
*/

float* getAveragePlusMinus(int* angka, int n) {
	float totalPlus = 0, totalMin = 0;
	int countPlus = 0, countMin = 0;
	
	//Procces to sum minus and plus, also count plus and minus
	for(int i = 0; i < n; i++) {
		if(angka[i] > 0) {
			totalPlus += angka[i];
			countPlus++;
		}
		else {
			totalMin += angka[i];
			countMin++;
		}
	}
	
	//Rata rata disimpan dalam bentuk array
	float* avg = new float[2];
	avg[0] = totalPlus / countPlus;
	avg[1] = totalMin / countMin;
	
	return avg;
}

main() {
	int n;
	
	cout<<"Masukkan n angka: ";
	cin>>n;
	
	int angka[n];
	
	//User input and saving to array angka
	for(int i = 0; i < n; i++) {
		cout<<"Masukkan angka ke-"<<i + 1<<": ";
		cin>>angka[i];
	}
	
	//Set 2 angka di belakang koma
	cout<<setprecision(2)<<fixed;
	
	//Call function to get average result
	float* avg = getAveragePlusMinus(angka, n);
	
	//Print result
	cout<<endl<<"Average of positive numbers: "<<avg[0]<<endl;
	cout<<"Average of negative numbers: "<<avg[1]<<endl;
}
