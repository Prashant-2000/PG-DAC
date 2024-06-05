// 14. Draw a rectangle for user defined dimensions of length and breadth. 

#include<iostream>
using namespace std;

int main(){

	int length, breadth ;

	cout<<"Enter a length and breadth : ";
	cin>>length>>breadth ;

	for(int i=1; i<=breadth; i++){              //Rows
		for(int j=1; j<=length; j++){       //Columns
			
			if(i==1 || i==breadth){     //Printing first and last line of rectangle 
				cout<<"* ";
			}
			else{
				if(j==1 || j==length)    //Printing stars and spaces both
					cout<<"* ";
				else
					cout<<"  ";
			}
		}
		cout<<endl;
	}
}
