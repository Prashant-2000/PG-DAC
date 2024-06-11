/* 20. Find the sine value of an angle by calculating the following series up to first 5 items
sin(x) = x – x^3/3! + x^5/5! – x^7/7! + x^9/9!
Where x is in radians.
Radian = 180/PI
PI = 3.142
Make use of following functions:
int factorial(int); and int power(int, int);
*/

#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){

	if(n <= 1)
	       	return 1;
	else
	 	 return n * factorial(n-1);
}

int power(int number, int power){

	for(int i=1; i<=power; i++){
		number = number * power ;
	}
	return number;
}

int main(){
	
	float Radian, PI=3.142, X, x ;

	Radian = 180/PI ;

	cout<<"Enter value of X : ";
	cin>>X;
	
	x = X*Radian ;
	cout<<"Converted in degree is : "<<x<<endl; 
	
        float result = x - (power(x, 3)/factorial(3)) + (power(x, 5)/factorial(5)) + (power(x, 7)/factorial(7)) + (power(x, 9)/factorial(9)) ;

        cout<<"Result is : "<<result<<endl;

	return 0;
}
