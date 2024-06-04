/* 8. Write a program to accept the basic salary and total sales amount for a salesperson and calculate commission according to sales amount. Display the net salary and commission earned. (Net Salary = Basic Salary + Commission) The range is as follows.

Sales Amount in Rupees      Commission on Sales 
5000 to 7500                     3%

7501 to 10500                    8%

10501 to 15000                   11%

15000 and above                  15%
*/

#include<iostream>
using namespace std;

int main(){

	float basicSalary, salesAmount, Commission, NetSalary;

	cout<<"Enter a basic salary and Total sales amount: ";
	cin>>basicSalary>>salesAmount ;

        if(salesAmount >= 5000 && salesAmount <= 7500){
		Commission = 0.03*salesAmount ;
	} 
	else if(salesAmount >= 7501 && salesAmount <= 10500){
		Commission = 0.08*salesAmount ;
	}	
	else if(salesAmount >= 10501 && salesAmount < 15000){
		Commission = 0.11*salesAmount ;
	}
	else if(salesAmount >= 15000){
		Commission = 0.15*salesAmount ;
	}

	cout<<"Commission is : "<<Commission<<endl;

        NetSalary = basicSalary + Commission ;

	cout<<"Net Salary is : "<<NetSalary<<endl;

}
