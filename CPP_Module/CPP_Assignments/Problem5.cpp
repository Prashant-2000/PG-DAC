/* 5. Write a program to calculate Net Salary of an employee. Accept Basic Salary (BS) from the user.          
  	HRA is 15% of BS
	DA is 30% of BS	
	PF is 12.5% of GS
	Gross Salary is BS + HRA + DA
	Net Salary = Gross Salary – PF
	*/

#include<iostream>
using namespace std;

int main(){

	float Salary, HRA, DA, PF, GrossSalary, NetSalary;

	cout<<"Enter your salary :"<<endl;
	cin>>Salary;

	HRA = 0.15 * Salary ;
	DA = 0.30 * Salary ;

	GrossSalary = Salary + HRA + DA ;
	cout<<"Gross salary is : "<<GrossSalary<<endl;

	PF = 12.5/100 * GrossSalary ;
	cout<<"PF is "<<PF<<endl;

	NetSalary = GrossSalary - PF;
        cout<<"Net Salary is : "<<NetSalary<<endl;
}
