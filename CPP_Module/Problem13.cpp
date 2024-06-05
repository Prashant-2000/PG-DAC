// 13. Write a program to display whether a user entered number is prime or not.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

	int num, flag=0;

	cout<<"Enter a number : ";
	cin>>num;

	if(num == 1 || num <= 0){
		cout<<"Not Prime \n";
		exit(1);
	}
	for(int i=2; i<num; i++){

		if(num%i == 0){
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		cout<<"This is Prime number \n";
	else
		cout<<"Not Prime \n";
}
