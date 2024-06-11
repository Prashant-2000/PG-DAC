/* 18. Write a program to generate following table:

Data Type   Size in Bytes
Integer          4
Character        1
Float            4

The border of the above table should be generated using a function ‘charLine()’. This function accepts a character and the length of the line to be printed, entered by the user in main(). Use the character to print the line.
*/

#include<iostream>
using namespace std;

void charLine(char ch, int length){

	for(int i=0; i<=length; i++){
		cout<<ch;
	}
	cout<<endl;
}
int main(){

        int length;
	char ch;

	cout<<"Enter a character and length : ";
	cin>>ch>>length;

	charLine(ch, length);
	cout<<"Data Type     Size in Bytes\n";
	charLine(ch, length);	
	cout<<"Integer	          4       \n";
	charLine(ch, length);
	cout<<"Character          1       \n";
	charLine(ch, length);
	cout<<"Float              4       \n";
        charLine(ch, length);
		
}
