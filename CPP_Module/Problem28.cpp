/*  
 28. Write a program which will calculate multiplication of two 3 by 3 matrices.
*/

#include<iostream>
using namespace std;

void Accept(int mat[][3]){
	 
	cout<<"Enter elements in a matrix : \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>mat[i][j];
		}
	}
}

void Display(int mat[][3]){

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<mat[i][j]<<" " ;
		}
		cout<<endl;
	}
	cout<<endl;
}

void m3x3(int mat1[][3], int mat2[][3], int mat3[][3]){

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			mat3[i][j] = 0;
			for(int k=0; k<3; k++){

				mat3[i][j] += mat1[i][k] * mat2[k][j] ;
			}
		}
	}
	Display(mat3);
}
int main(){

	int mat1[3][3];
	int mat2[3][3];

	int mat3[3][3];

	Accept(mat1);
	Accept(mat2);

	cout<<"Displaying matrix 1 and 2 : \n";
	Display(mat1);
	Display(mat2);

	cout<<"Mulitiplication of two matrix is  :  \n";
	m3x3(mat1, mat2, mat3);
}
