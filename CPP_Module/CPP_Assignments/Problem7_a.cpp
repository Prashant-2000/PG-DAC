/* 7. Write a program to find leap year by using:
a. if-else and logical operators (&& and ||)				
b. Conditional Operators (? :)							
(A leap year is divisible by 4 and is not divisible by 100 but it could be divisible by 400)
*/

#include<iostream>
using namespace std;
int main(){

	int year;

	cout<<"Enter a year : ";
	cin>>year;

	if(year%100 != 0 && year%4 == 0 || year%400 == 0){

		cout<<"this is leap year"<<endl;
	}
	else{
		cout<<"This is not a leap year"<<endl;
	}
}
