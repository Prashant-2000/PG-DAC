// 12. Write a program to print whether user entered number is an Armstrong number.  Armstrong number is one for which the sum of the cube of all its digits is same as the number.  For example, 153 = (1*1*1) + (5*5*5) + (3*3*3)

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int number, duplicateNum, originalNum, sum=0, rem, digit=0;

	cout<<"Enter a number : ";
	cin>>number;

	duplicateNum = number;

	//Counting Digits
	while(duplicateNum != 0){
		duplicateNum = duplicateNum/10 ;
	        digit++;
	}
	cout<<digit;

	originalNum = number;

	while(number != 0){

	        rem = number%10 ;
		sum = sum + pow(rem, digit)  ;
         	cout<<sum<<endl;
		number = number/10 ;
	}

	if(originalNum == sum)
		cout<<"This is Armstrong"<<"\n";
	else
		cout<<"Not Armstrong"<<"\n";
}
