/*
DEV TONY
CREATED 8/11
LAST MOD 8/11
*/
#include <iostream>
#include "functions.cpp"
using namespace std;
//Introduces user to the program with opening dialogue
	void introduction()
	{
	cout << "Welcome to BASE, what would you like to do?" << endl; 
	cout << "1 - Convert from BASE X to BASE TEN" << endl;
	cout << "2 - Convert from BASE TEN to BASE X" << endl;
	cout << "3 - Convert from DECIMAL to BINARY" << endl;
	}
int main()
{
	int userChoice;

	
	

	//Prompts User
	cin >> userChoice;
		switch (userChoice)
		{
			case '1': 
				cout << "You chose to convert from BASE X to BASE TEN" << endl;
				//Call convertX1 function
			case '2':
				cout << "You chose to convert from BASE TEN to BASE X" << endl; 
				//Call convertX2 function
			case '3':
				cout << "You chose to convert from DECIMAL to BINARY" << endl;
				//Call DECBIN function
			default: 
				cout << "Entered an invalid choice. Use the number corresponding with the choices" << endl;
				introduction();
		}

	return 0;
}