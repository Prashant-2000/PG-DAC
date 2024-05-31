//     Write a recursive function to obtain n numbers of a Fibonacci series
//     0 1 1 2 3 5 8 13 21 34 55 89...

#include<iostream>
using namespace std;


int fib(int n){

	if(n==0 || n==1)
		return n;
	else{
		return fib(n-1) + fib(n-2);
	}
}
int main(){

	int n ;

	cout << "Enter nth term : ";
	cin >> n ;

	int result = fib(n);

        cout << "nth term of fibonacci is : "<< result << endl ;

}
