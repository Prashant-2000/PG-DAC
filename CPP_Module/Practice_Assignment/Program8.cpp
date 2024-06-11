//Accept n numbers from users and store them in to array, Write a function to sort and display sorted array.

#include<iostream>
using namespace std;

void display(int a[], int size){

    for(int i=0; i<size; i++){
	    cout<<a[i]<<" ";
    }
    cout<<endl;
}

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

int main(){

	int arr[10];
        int size = sizeof(arr)/sizeof(arr[0]) ;

	cout<<"Size of array is : "<<size<<endl ;

	for(int i=0; i<size; i++){
	     cin>>arr[i];	
	}

	cout<<"Before sorting : ";
	display(arr, size);

	sortArray(arr, size);

	cout<<"After sorting : ";
	display(arr, size);

}
