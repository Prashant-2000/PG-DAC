// 22. Write a program to accept date, month, year from the user in a function called getDate(), and print that date in main() in dd/mm/yy format.

#include<iostream>
using namespace std;


int getDate(int *d, int *m, int *y){

	int date, month, year;

	cout<<"Enter Date : ";
	cin>>*d;

	cout<<"Enter Month : ";
	cin>>*m;

	cout<<"Enter Year : ";
	cin>>*y;

}
int main(){

	int date, month, year;

        getDate(&date, &month, &year);

	cout<<"Date is : "<<date<<"/"<<month<<"/"<<year<<endl;
}
