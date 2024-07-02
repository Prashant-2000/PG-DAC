#include<iostream>
#include"HeaderFile.h"
using namespace std;

int main(){

	int size, choice;

	cout<<"Enter a size : ";
        cin>>size;

	Employee * eptr = new Employee[size] ;

	do{

	cout<<"\n1. Input  \n"
	    <<"2. Display data  \n"
   	    <<"3. Get number of employee  \n"
            <<"0. Exit \n"	
	    <<"Enter your choice : \n\n";
        
  	cin>>choice;	
	switch(choice){

		case 1:
			//Accepting Input
  		        for(int i=0; i<size; i++){
               	               eptr[i].acceptInput();
                        }
			break;

		case 2:	
			//Displaying Output
		        for(int i=0; i<size; i++){
               	               eptr[i].display();
                        }
			break;

		case 3:	
			//Getting count
		        cout<<"Number of objects : "<<Employee::getCount()<<endl;
	                break;
	    
	        case 0:
	                cout<<"Exiting...\n";
	 		break;

		default:
			cout<<"Error...\nPlease enter valid choice...\n";
	}
	}while(choice != 0);


}

