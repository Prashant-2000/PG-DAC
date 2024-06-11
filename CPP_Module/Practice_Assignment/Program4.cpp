//Write a function to find the binary equivalent of this number using recursion.

#include<iostream>
using namespace std;

int binaryEquivalent(int n){
	if(n == 0)
		return 0;
	else
		return n%2 + 10*binaryEquivalent(n/2);
}
int main(){

	int number ;

	cout<<"Enter a number : ";
	cin>>number ;

	int result = binaryEquivalent(number);
        
	cout<<"The binary equuivalent of a number is : "<< result <<endl ; 
}
