/*
1. Get  4 digit number from user, write a function to calculate sum of digits of the 4-digit number:
    • Using loop
    • Using recursion 
*/

#include<iostream>
using namespace std;

int sumOfNumber(int n);
int main(){

	int n;

	cout<<"Enter a number : ";
	cin>>n;

	int result = sumOfNumber(n);
	cout<<result<<endl;

}
int sumOfNumber(int n){
       int rem, sum=0;
       while(n != 0){
	       rem = n%10;
	       sum = sum + rem;
	       n = n/10 ;
       }
       return sum;
}
