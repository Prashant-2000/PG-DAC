/*
24.  Accept five integers in an array and use separate functions to:
a. Find maximum and minimum of the integers. Do not sort the array.
b. Multiply each element of the array by 5 and store it in another array and display it.

 */
#include<iostream>
using namespace std;

void populateData(int arr[], int size){

	for(int i=0; i<size; i++){
		cin>>arr[i];	
	}
	cout<<endl;
}

int maxInArray(int arr[], int size){
	int max=arr[0];

	for(int i=0; i<size; i++){
		if(max < arr[i])
			max = arr[i];
	}
	return max;	
}

int minInArray(int arr[], int size){
	int min = arr[0];

	for(int i=0; i<size; i++){
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}

void copyDataInAnotherArray(int arr[], int ca[], int size){

	for(int i=0; i<size; i++){
		arr[i] = arr[i] * 5 ;
	}

	//copying in another array
	for(int i=0; i<size; i++){
		ca[i] = arr[i];
	}
}

void display(int arr[], int size){

	for(int i=0; i<size; i++){

		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
}

int main(){

	int size;

	cout<<"Enter size of an array : \n";
	cin>>size ;
	cout<<endl;
		
	int *arr = new int [size];      //Memory allocated dynamically
	
	int *ca = new int [size];

        cout<<"Enter elements in an array : \n";	
	populateData(arr, size);
	display(arr, size);

	int min = minInArray(arr, size);
	cout<<"Minimum element in an array is : "<<min<<endl<<endl;

	int max = maxInArray(arr, size);
	cout<<"Maximum element in an array is : "<<max<<endl<<endl;

	//copy array content in another array
	copyDataInAnotherArray(arr, ca, size); 

	cout<<"Copied array content is : \n";
   	display(ca, size);


}
