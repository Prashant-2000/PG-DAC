//Write a function for factorial and use the function for printing factorial series like 1 2 6 24 120………

#include<iostream>
using namespace std;

int factorial(int n){
        if(n<=1)
		return 1;
	else
         	return n * factorial(n-1);
}
int main(){

	int n, result;

	cout<<"Enter a number : ";
	cin>>n;
        
	for(int i=1; i<=n; i++){
	      result = factorial(i);
              cout<<result<<endl;	      
	}

}
