// 15. Write a program to generate all possible combinations of 1, 2, 3 using for loop.


#include<iostream>
using namespace std;

int main(){

	int i, j, k, count=0 ;

	for(i=1; i<=3; i++){
		
		for(j=1; j<=3; j++){

			for(k=1; k<=3; k++){
				count++;
				cout<<i<<" "<<j<<" "<<k<<endl;
                	}
		}
	}

	cout<<"Total combination is : "<<count<<endl;
}

