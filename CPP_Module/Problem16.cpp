/* 16. Write a program for matchstick game between the computer and the user. 
  Your program should ensure that the computer always wins. Rules for the game are as follows:	
  a. There are 21 matchsticks				
  b. The computer asks the player to pick 1, 2, 3, or 4 matchsticks.	
  C. Player is given the chance to pick the sticks first then the computer picks the sticks.	
  d. Whoever is forced to pick up the last matchstick loses the game.
*/

#include<iostream>
using namespace std;

int main(){

	int matchSticks = 21, user, computer, i=0;

	cout<<"Game has been start...\nYou can pick maximum 4 match sticks only : \n";

	do{

		cout<<"Pick Match Stick : \n" ;
		cin>>user;

		if(user>=1 && user<=4){
			
			cout<<"You picked : "<<user<<" match sticks\n";
       
       			matchSticks = matchSticks - user ;

                        cout<<"Now Computer's turn... : \n";
			
			switch(user){

				case 1:
					matchSticks = matchSticks - 4;
					cout<<"Computer picked : 4 match sticks\n\n";
					break;
				case 2:
					matchSticks = matchSticks - 3;
					cout<<"Computer picked : 3 match sticks\n\n";
					break;
				case 3:
					matchSticks = matchSticks - 2;
					cout<<"Computer picked : 2 match sticks\n\n";
					break;
				case 4:
					matchSticks = matchSticks - 1;
					cout<<"Computer picked : 1 match stick\n\n";
					break;
			}
		}
		else{
			cout<<"Invalid number--> Pick valid number of stick...\n";
		}

	}while(matchSticks >= 0);

        cout<<"You picked the last match stick...\nYou lost the game...\n";
}
