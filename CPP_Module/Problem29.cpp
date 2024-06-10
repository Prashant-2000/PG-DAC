/* 29. Write a program to accept a string from the user.  Write separate functions to perform the following:
a. Find the number of occurrences of given character in the string
b. Find the number of blank spaces in the string.
c. Find the number of words in the string.
d. Find the total number of all the vowels in the string.
*/

#include<iostream>
#include<string>
using namespace std;

int count = 0;
void charOccurance(string str, char ch){
         
	for(int i=0; i!='\0'; i++){

		if(ch == str[i])
			count = count + 1 ;
	}

	cout<<"Number of occurance of "<<ch<<" in an string is : "<<count<<endl;
}
int main(){

	string str;

	char ch ;

	cout<<"Enter a string : \n";
	cin.get();    //Eater
        getline(cin, str);

	cout<<"Your entered string is : "<<str<<endl;

	cout<<"Enter a character : ";
	cin>>ch;
	charOccurance(str, ch);

}

