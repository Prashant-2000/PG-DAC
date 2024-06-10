/*
 26.  Write a program to insert an element into an array. Accept position of element to be inserted from user.
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

void insertElement(int arr[], int &size, int index, int element){

        for(int i=0; i<size; i++){
                if(i == index){

			size = size+1 ;
                        for(int i=size; i!=index; i=i-1){
                                arr[i] = arr[i-1];
                        }
                        arr[i] = element;
                }
        }
}

int main(){

        int size, index, element;

	cout<<"Enter a size of an array : ";
	cin>>size;

        int *arr = new int [size];

        inputData(arr, size);
        display(arr, size);

        cout<<"Enter an index and value : ";
        cin>>index>>element;

        insertElement(arr, size, index, element);
        display(arr, size);
}
       
