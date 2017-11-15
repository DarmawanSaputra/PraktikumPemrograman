#include <iostream>
using namespace std;

/*
	Write a program to takes two matrix(3*3) array as inputs and calculate the multiplication of both matrix.

	Example :
	1. If two matrix are :
	Matrix 1st : 
	1 2 3 
	4 5 6 
	7 8 1 
	
	Matrix 2nd: 
	1 2 3 
	3 2 1 
	4 5 2 
	
	then the multiplication of both matrix should be : 
	19 21 11 
	43 48 29 
	35 35 31
*/

//Fungsi untuk mendapatkan nilai kalkulasi perkalian dari dua matrix
int** matrixCalculation(int** mat1, int** mat2) {
	int** res = new int*[3];
	for(int i = 0; i < 3; i++) {
		res[i] = new int[3];
		
		for(int j = 0; j < 3; j++) {
			int temp = 0;
			
			for(int k = 0; k < 3; k++) {
				temp += mat1[i][k] * mat2[k][j];
			}
			
			res[i][j] = temp;
		}
	}
	
	return res;
}

main() {
	int** mat1 = new int*[3];
	int** mat2 = new int*[3];
	
	//Proses mengisi array matrix 1
	cout<<"Masukkan matrix 1: "<<endl;
	for(int i = 0; i < 3; i++) {
		mat1[i] = new int[3];
		
		for(int j = 0; j < 3; j++) {
			cin>>mat1[i][j];
		}	
	}
	
	cout<<endl;
	
	//Proses mengisi array matrix 2
	cout<<"Masukkan matrix 2: "<<endl;
	for(int i = 0; i < 3; i++) {
		mat2[i] = new int[3];
		
		for(int j = 0; j < 3; j++) {
			cin>>mat2[i][j];
		}	
	}
	
	cout<<endl<<"Hasil perkaliannya: "<<endl;
	
	//Proses memanggil fungsi untuk mendapatkan nilai perkaliannya
	int** result = matrixCalculation(mat1, mat2);
	
	//Display
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}
