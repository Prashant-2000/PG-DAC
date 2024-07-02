#include<iostream>
#include"HeaderFile.h"
#include<string>

using namespace std;

//Case:1 --> Function non-constant and constant member function 
//Illegal --> It will give error
void Student::setMarks(){    

	//here I am trying to manipulate constant data member [marks] which is constant that's why it is giving error 
	cout<<"Enter marks : ";
        cin>>marks ;
}


//Case:2 --> Function constant and non constant data member
//Note : Here only string data member is constant and except that two data member are constant
void Student::display() const{

	cout<<"Roll number : "<<rollNo
	    <<"  Name : "<<name
            <<"  Marks : "<<marks<<endl;	    
}

//Case:3 --> Non-constant object (data member) and constant member function
void Student::getRoll() const{

	cout<<rollNo<<endl;
} 


//Case:4 --> Non-constant object (data member) and non-constant member function
void Student::accept(){

	cout<<"Enter name : ";
	cin.get();
	getline(cin, name);
}

