/*
DEV TONY
CREATED 8/11
LAST MOD 8/15
*/
#include "header.h" 
//Introduces user to the program with opening dialogue
	void introduction()
	{
	int userChoice;
	cout << "Welcome to BASE, what would you like to do?" << endl; 
	cout << "1 - Convert from BASE X to BASE TEN" << endl;
	cout << "2 - Convert from BASE TEN to BASE X" << endl;
	cout << "3 - Convert from DECIMAL to BINARY" << endl;
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
	cin >> userChoice;
	}
int main()
{
	//Prompts User
	void introduction();
		

	return 0;
}
