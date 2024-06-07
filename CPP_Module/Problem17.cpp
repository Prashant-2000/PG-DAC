/* 17. Write a program to generate following output.
1 2 3 4 5 4 3 2 1
1 2 3 4   4 3 2 1
1 2 3       3 2 1
1 2           2 1
1               1
*/

#include<iostream>
using namespace std;

int main(){

	for(int i=1; i<=5; i++){
		for(int j=1; j<=9; j++){

			if(j<=6-i || j>=4+i){
				cout<<j;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
