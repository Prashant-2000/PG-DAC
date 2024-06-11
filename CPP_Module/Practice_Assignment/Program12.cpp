//Accept n number from user and write functions for finding min ,max , second max and second min from these numbers

#include<iostream>
using namespace std;

void sortArray(int a[], int size){
        int temp;
        for(int i=0; i<size; i++){
                for(int j=i+1; j<size; j++){
                        if(a[i] > a[j]){
                                temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                        }
                }
        }

}

void min(int a[], int size){
	sortArray(a, size);
	cout<<"Minimum is : "<<a[0]<<endl;
}

void min2(int a[], int size){
	cout<<"2nd minimum element in an array is : "<<a[1]<<endl;
}

void max(int a[], int size){
	cout<<"Maximum is : "<<a[size-1]<<endl ;
}

void max2(int a[], int size){
	cout<<"2nd maximum element in an array is : "<<a[size-2]<<endl;
}

void display(int a[], int size){
	for(int i=0; i<size; i++){
	     cout<<a[i]<<" "<<endl ;	
	}
}

int main(){

	int size;
	cout<<"Enter size of an array : ";
	cin>>size;
	int arr[size];

	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	display(arr, size);
	min(arr, size);
	display(arr, size);
	min2(arr, size);

	max(arr, size);
	max2(arr, size);

}
