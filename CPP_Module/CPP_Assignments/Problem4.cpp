// 4. Write a program to swap two variables using a third variable and without using third variable.

#include<iostream>
using namespace std;

int main(){

	int n1, n2, temp ;
	int a, b ;

	cout<<"Enter two number : "<<endl;
	cin>>n1>>n2 ;

	cout<<"Before swap : n1="<<n1<<" and n2="<<n2 <<endl;

	//Swap using third variable
	temp = n1;
	n1 = n2;
	n2 = temp;

	cout<<"Swapping using third variable --> After swap : n1="<<n1<<" and n2="<<n2 <<endl;

        cout<<"Again Enter two number : "<<endl;
        cin>>a>>b ;

	cout<<"Before swap : a="<<a<<" and b="<<b <<endl;
        
	//Swap without third variable
	a = a+b;
	b = a-b;
	a = a-b;

	cout<<"Swapping without using third variable --> After swap : a="<<a<<" and b="<<b <<endl;





}
