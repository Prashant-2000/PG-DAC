// 23. Write a program which accepts two integers in main(). Pass these as arguments to function max(). In max(), find the maximum of these two numbers and using a return statement, return the address of the maximum number and print it in main().

#include<iostream>
using namespace std;

int* max(int *a, int *b){

	if(*a>*b)
		return a;
	else
		return b;
}
int main(){

	int a, b;
	int *ptr=NULL;
         
	cout<<"Enter two integer numbers : ";
	cin>>a>>b;

	ptr = max(&a, &b);

	cout<<"Max is : "<<*ptr<<"\n";

	return 0;
}
