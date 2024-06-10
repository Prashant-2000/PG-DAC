/* 31. Write a program to sort five user entered strings into alphabetical order. Use dynamic memory allocation to store strings.
*/

#include<iostream>

using namespace std;

int main(){

	string *p = new string[5];

	//Accept
	for(int i=0; i!=5; i++){
		cin >> p[i];
	}

	cout << "Before sorting : \n";
	//Display
	for(int i=0; i!=5; i++){
		cout << p[i];
	}

	cout << "After sorting : \n";

	for(int i=0; i<5; i++){
		for(int j=i; j!='\0'; j++){
			for(int k=i+1; k!='\0'; k++){
				if(p[j] > p[k])
				{
					string temp = p[j];
					p[j] = p[k];
					p[k] = temp;
				}
			}
		}
	}

	for(int i=0; i!='\0'; i++){
                cout << p[i]; 
        }

}
