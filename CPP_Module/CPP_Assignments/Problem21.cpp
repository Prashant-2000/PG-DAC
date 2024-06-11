/* 21. Write a menu driven program, which allows the user to select either a circle or rectangle.
Write a single function areaCircum() that calculates the area and circumference of a circle.  The values of area and circumference should be printed in main()
Write a single function areaPeri() that calculates the area  and perimeter of a rectangle. The values of area and perimeter should be printed in main()
*/

#include<iostream>
using namespace std;

void areaCircum(float r){

	float area, PI=3.142, circumference;

	area = PI*r*r ;
	cout<<"Area of circle is : "<<area <<"\n\n";

	circumference = 2*PI*r ;
	cout<<"Circumference of circle is : "<<circumference <<"\n\n";
}

void areaPeri(float l, float w){

	float area, perimeter;

	area = l*w;
	cout<<"Area of rectangle is : "<<area <<"\n\n";

	perimeter = 2*(l+w);
	cout<<"Perimeter of rectangle is : "<<perimeter<<"\n\n";
} 

int main(){

	int choice, radius, length, width;
	
	do{
		cout<<"1. Circle"<<endl
                <<"2. Rectangle"<<endl
                <<"0. Exit\n\n"
                <<"Enter your choice : \n";

                cin>>choice;

                switch(choice){

			case 1:
				cout<<"Enter radius : \n";
				cin>>radius;
				areaCircum(radius);
				break;

			case 2:
		                cout<<"Enter length and width : \n";
		                cin>>length>>width ;
				areaPeri(length, width);
				break;

		        case 0:
				cout<<"Exiting...\n";
				break;

			default:
				cout<<"Invalid choice...";

		}
	}while(choice != 0);
}
