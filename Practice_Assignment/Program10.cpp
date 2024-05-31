//Accept n numbers from user and write a function to find out average and display average.

#include <iostream>
using namespace std;

void findAvg(int a[], int size){

	float sum=0;
	for(int i=0; i<size; i++){

		sum = sum + a[i];
	}

	float result = sum/size ;

	cout<<"Average is : "<<result<<endl;
}
int main(){

	int arr[10];
        int size = sizeof(arr)/sizeof(arr[0]);

	cout<<"Size is : "<<size<<endl;
	cout<<"Enter numbers : ";

	for(int i=0; i<size; i++){

		cin>>arr[i];
	}
	findAvg(arr, size);

}
