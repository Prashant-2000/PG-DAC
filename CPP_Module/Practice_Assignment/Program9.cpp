//Accept n characters from user and print is as string.

#include <iostream>
using namespace std;

int main(){

	char charArray[10];
        int size = sizeof(charArray)/sizeof(charArray[0]);

	cout<<"Size of array is : "<<size<<endl;

	cout<<"Enter characters : ";
	
	for(int i=0; i<size; i++){

		cin>>charArray[i];
	}

	string s = "";

	for(int i =0 ; i < size ; i++){
		s = s + charArray[i];
	}
	// string s(charArray)
	
	cout<<s<<endl;

}
