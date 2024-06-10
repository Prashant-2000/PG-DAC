/*30. Write a program that calculates the average marks of all the subjects.  The number of subjects ‘n’ is accepted from the user.  Allocate memory dynamically for ‘n’ integers.  Free the memory when not in use.
*/

#include <iostream>
using namespace std;

int main(){
	
	int n, sum=0;
	cout << "How many subjects : ";
	cin >> n;

	//Dyna,ically memory allocated
	int *p = new int[n];

	for(int i=0; i<n; i++){
		cin >> p[i];
		sum += p[i];
	}
	
	int avg = sum/n;

	cout << "Average is : " << avg ;

}
