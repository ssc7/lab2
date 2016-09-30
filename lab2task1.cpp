#include<iostream>
#include<time.h>    
#include<stdlib.h>   
using namespace std;
int main() {
	srand(time(NULL));   //setting the seed value
	char choice = 'y';	 //assigning y to 'choice' for first throw of the dice
	int random_number;

	while (choice == 'y' || choice == 'Y')
	{
		random_number = rand() % (5);		//generates number from 1 to 5
		cout << random_number + 1 << endl;  //adding 1 to avoid zero
		cout << "Press Y to throw dice again\nPress any key to end the program" << endl;
		cin >> choice;
	}

}