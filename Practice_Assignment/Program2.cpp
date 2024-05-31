//Write a program to find the roots of equation using function.

#include <iostream>
#include<cmath>
using namespace std;

double posEqRoot(int a, int b, int c){

	return ((-b) + (sqrt ((b*b)-(4*a*c)))) / (2*a) ;
}

double negEqRoot(int a, int b, int c){

	return ((-b) - (sqrt ((b*b)-(4*a*c)))) / (2*a) ;
}
int main(){
	int x, y, z ;

	cout << "Enter x, y, z  : ";
	cin >> x >> y >> z;

	double result1 = posEqRoot(x, y, z);
        double result2 = negEqRoot(x, y, z);	

	cout << "Roots of the equation are : "<< result1 <<" " << result2 << endl;
}
