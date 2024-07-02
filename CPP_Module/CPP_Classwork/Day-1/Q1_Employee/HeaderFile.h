#include<iostream>
#include<string>
using namespace std;

static int count = 0;

class Employee{

	 int empid;
	 string name;
	 int salary;
	// static int count;

	 public:

	 Employee(); 

	 void acceptInput();
	 void display();

	 static int getCount();
};


