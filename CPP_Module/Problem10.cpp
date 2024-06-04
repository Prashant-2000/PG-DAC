// 10. Write a program to find maximum of three numbers using conditional operators.

#include<iostream>
using namespace std;

int main(){

	int n1, n2, n3;

	cout<<"Enter three integer numbers : ";
	cin>>n1>>n2>>n3;

        n1>n2 ? (n1>n3 ? cout<<"Max is : "<<n1 : cout<<"Max is : "<<n3) : (n2>n3 ? cout<<"Max is : "<<n2 : cout<<"Max is : "<<n3) ;
        	
}
