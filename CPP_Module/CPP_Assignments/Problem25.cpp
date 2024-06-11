/*
 25. Write a program to delete an element from a user entered array. Accept position of element to be deleted from user.
*/

#include<iostream>
using namespace std;

void inputData(int arr[], int size){

	cout<<"Enter an element in an array : \n";

	for(int i=0; i<size; i++){

		cin>>arr[i];
	}
	cout<<endl;
}

void display(int arr[], int &size){

	for(int i=0; i<size; i++){

		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
}

void deleteElement(int arr[], int &size, int index){

	for(int i=0; i<size; i++){
		if(i == index){
		        size = size-1 ;
			for(int i=index; i<size; i=i+1){
                                arr[i] = arr[i+1];
                        }
		}
         }
}
int main(){

	int size, index;

	cout<<"Enter a size of an array : ";
	cin>>size;

	int *arr = new int [size];


	inputData(arr, size);
	display(arr, size);

	cout<<"Enter an index of an element which you want to delete : ";
        cin>>index;

	deleteElement(arr, size, index);
	display(arr, size);

}
