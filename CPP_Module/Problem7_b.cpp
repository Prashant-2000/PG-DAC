//7. b

#include<iostream>
using namespace std;

int main(){

	int year, result;

	cout<<"Enter a year : ";
	cin>>year;

        result = (year%4 ==0)? (year%100 != 0) ?1 :(year %400== 0)? 1 : 0 : 0 ;   
        if(result == 1){
	      cout<<"Leap Year...\n";
	}			
        else{
	      cout<<"Not a Leap year...\n";
	}	
}
