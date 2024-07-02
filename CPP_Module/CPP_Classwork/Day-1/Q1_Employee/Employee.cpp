#include<iostream>
#include<string>
#include"HeaderFile.h"
using namespace std;

//int Employee::count=0 ;

void Employee::acceptInput(){

	cout<<"Enter employee id : ";
	cin>>empid;

	cout<<"Enter name : ";
	cin.get(); //Eater
	getline(cin, name);

	cout<<"Enter salary : ";
	cin>>salary;
}

void Employee::display(){

	cout<<"Employee id : "
	    << empid <<"  Name : " 
	    <<name<<"  Salary : "
            <<salary<<endl<<endl;
}

int Employee::getCount(){

	return count;
}

//CTOR
Employee :: Employee(){
	empid = 0;
	name = "";
	salary = 0;
	count++;
}
