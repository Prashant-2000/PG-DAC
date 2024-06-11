/*
27.  Write a program to accept and display 3 by 3 matrix. Write Accept() and Display() functions to perform the tasks.
a. Find the transpose of a matrix and print the transpose using display() function.
b. Accept another matrix of same dimensions.  Find the addition of two matrices and print the resultant matrix.
*/

#include<iostream>
using namespace std;

void Accept(int mat[][3]){

	cout<<"Enter elements in a matrix : ";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>mat[i][j];
		}
	}
	cout<<endl;
}

void Display(int mat[][3]){

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<mat[i][j]<< " ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void transposeMat(int mat[][3], int transpose[][3]){

	for(int i=0; i<3; i++){

		for(int j=0; j<3; j++){

			transpose[j][i] = mat[i][j];
		}
	}

	Display(transpose);
}

void matAddition(int mat1[][3], int mat2[][3], int addition[][3]){

	for(int i=0; i<3; i++){

		for(int j=0; j<3; j++){

			addition[i][j] = mat1[i][j] + mat2[i][j] ;
		}
	}

	Display(addition);
}
int main(){

	int mat1[3][3];
	int mat2[3][3];

	int transpose[3][3];
	int addition[3][3];

	Accept(mat1);
	Accept(mat2);

	cout<<"Display mat1 : \n";
	Display(mat1);

	cout<<"Display mat2 : \n";
	Display(mat2);

	cout<<"Transpose of mat1 : \n";
	transposeMat(mat1, transpose);

	cout<<"Transpose of mat2 : \n";
	transposeMat(mat2, transpose);

	cout<<"Addition of two matrix is : \n";
	matAddition(mat1, mat2, addition);
}
