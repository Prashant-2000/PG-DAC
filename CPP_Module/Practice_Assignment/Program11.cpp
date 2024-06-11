//Accept n numbers from user and write a function to multiply each number by 2 and display result.

#include<iostream>
using namespace std;

void display(int a[], int size){
	for(int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void multiplyBy2(int a[], int size){
	for(int i=0; i<size; i++){
		a[i] = a[i]*2 ;	
	}	
}
int main(){

	int size;
	cout<<"Enter a size of an array : ";
	cin>>size;
	int arr[size];

	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Before calling function : ";
	display(arr, size);

	multiplyBy2(arr, size);

	cout<<"After calling function : ";
	display(arr, size);
}
