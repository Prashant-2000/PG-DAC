//Write a recursive function to obtain the running sum of n numbers.

#include<iostream>
using namespace std;

int runNum(int n){
        
	if(n == 1)
		return n;
	else
		return n + runNum(n-1);
}
int main(){

	int number;

	cout<<"Enter a number : ";
	cin>>number;

	int result = runNum(number);

	cout<<"Sum of number is : "<< result << endl ;

}
