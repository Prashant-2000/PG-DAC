// 19. Write a function ‘Fibonacci()’ to generate the terms of the fibonacci series. The number of terms should be entered by the user in main().  The series should be printed in the function. The terms of the Fibonacci series are 0 1 1 2 3 5 8 13 21 . . .

#include<iostream>
using namespace std;

void fibonacci(int n){

	int n1=0, n2=1, temp, i=1;

	cout<<n1<<" "<<n2<<" ";           //Here 2 term printed by default

       	for(int i=3; i<=n; i++){          //Here from term 3 fibonacci series is printed
		temp = n1+n2;
	       	n1 = n2;
        	n2 = temp;
        	cout<<n2<<" ";
	}

}
int main(){

	int term;

	cout<<"Enter the term : ";
	cin>>term;

	fibonacci(term);
}
