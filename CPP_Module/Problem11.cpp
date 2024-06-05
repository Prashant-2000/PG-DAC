/* 11. Write a program to convert user entered character into its opposite case. Program should also flash an error message if the character entered by the user is not an alphabet.
*/
#include<iostream>
using namespace std;

int main(){

	char ch;

	cout<<"Enter a character : ";
	cin>>ch;

	if(ch>=65 && ch<=90){
  	        ch = ch+32 ;
                cout<<"Opposite case is : "<<ch<<endl;
	}
	else if(ch>=97 && ch<=122){
		ch = ch-32 ;
		cout<<"Opposite case is : "<<ch<<endl;
	}
	else{
	        cout<<"Please enter alphabet only..."<<endl;
	}

}
