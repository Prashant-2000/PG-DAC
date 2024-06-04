// 6. Accept a character from user. It may be alphabet, digit or any other character. Print its ASCII value.

#include<iostream>
using namespace std;

int main(){

	char ch;

	cout<<"Enter a charater : ";
	cin>>ch;

	int result = (int)ch ;

        cout<<"ASCII value of "<<ch<<" is : "<<result;
}
