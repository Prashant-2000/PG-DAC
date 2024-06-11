// 2. Write a program to accept marks of five subjects from the user and calculate their average. Use implicit and explicit type conversion.

#include <iostream>
using namespace std;

int main(){

	int a, b, c, d, e;
	float avg1, avg2;

	cout<<"Enter five numbers : "<<endl;
	cin>>a >>b >>c >>d >>e ;

	//Implicit TypeCasting
	avg1 = (a+b+c+d+e) / 5.0 ;
	cout<<"Implicit typecasting--> Average is : "<<avg1 <<endl;

	//Explicit TypeCasting
	avg2 = ((float)a+b+c+d+e) / 5 ;
	cout<<"Explicit typecasting--> Average is : "<<avg2 <<endl;

}
