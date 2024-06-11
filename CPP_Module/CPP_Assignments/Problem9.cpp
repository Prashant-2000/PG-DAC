// 9. Using switch-case construct, write a menu driven program to perform basic calculations (addition, subtraction, multiplication and division) on two user entered numbers.
#include<iostream>
using namespace std;

int main(){

	int n1, n2;
	int choice;

	cout<<"1. Addition\n"<<endl
	    <<"2. Substraction\n"<<endl
            <<"3. Multiplication\n"<<endl
            <<"4. Division\n"<<endl
            <<"0. Exit\n"<<endl;

	cout<<"Enter two numbers : "<<endl;
        cin>>n1>>n2;

        cout<<"Enter your choice : ";
        cin>>choice;	
	
	switch(choice){

		case 1:
                        cout<<"Addition is : "<<n1+n2<<endl;
			break;

		case 2:
                        cout<<"Substraction is : "<<n1-n2<<endl;
                        break;
		case 3:
                        cout<<"Multiplication is : "<<n1*n2<<endl;
                        break;
		case 4:
                        cout<<"Division is : "<<n1/n2<<endl;
                        break;
                case 0:
                        cout<<"Exiting..."<<endl;
                        break;
		default:
                        cout<<"Invalid choice..."<<endl;

	}





}
