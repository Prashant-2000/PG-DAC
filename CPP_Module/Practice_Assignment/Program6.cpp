//Write functions for calculating area of circle, rectangle, and square and call these functions from main function.

#include<iostream>
using namespace std;

double areaOfCircle(int r){
	return 3.14*r*r ;
}

double areaOfRectangle(int l, int w){
	return l*w ;
}

double areaOfSquare(int s){
	return s*s ;
}

int main(){

	double rad, length, width, side, result ;
        int choice;
	do{
	cout<<"1. Area of Circle\n2. Area of Rectangle\n3. Area of Square\n4.Exit\n";
	cin>>choice ;
        
	switch(choice)
	{
	   case 1:

		   cout<<"Enter a radius : " ;
		   cin>>rad;

		   result = areaOfCircle(rad);
		   cout<<"Area of circle is : "<< result << endl;
                   break;

           case 2:

		   cout<<"Enter length and width : ";
	           cin>>length>>width;

	           result = areaOfRectangle(length, width);
	        
	           cout<<"Area of rectangle is : "<< result << endl ;
	           break;
	   
	   case 3: 

	           cout<<"Enter a side : ";
	           cin>>side;

	           result = areaOfSquare(side);

	           cout<<"Area of square is : "<<result<<endl;
	           break;
            
            case 4:

                   cout<<"Exiting...\n";
		   break;

	    default:
	            
	            cout<<"Invalid choice!"<<endl;

	}
	}while(choice != 4);

}
