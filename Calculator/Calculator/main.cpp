#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	//declaring a variables for users input
	int a;
	int b;
	int c;

	//variables needed for the calculator
	char Result = 'y';
	int ArifList;


	//All code in cicle
	while (Result == 'y')
	{
		//I greet the user and ask about the numbers
		cout << "Welcome to calculator" << endl;
		cout << "Enter the first number - ";
		cin >> a;

		cout << "Enter the second number - ";
		cin >> b;

		//User choose one of four arithmetic operations
		system("cls");
		cout << "Select the number associated with the mathematical operation" << endl;
		cout << "1. The sum of two numbers" << endl << "2. Subtracting two numbers" << endl;
		cout << "3. Multiplication of two numbers" << endl << "4. Dividing two numbers" << endl;
		cin >> ArifList;

		//Switch checks which number user choose and give him answer
		switch (ArifList)
		{
		case 1:
			c = a + b;
			system("cls"); //All what been in console clean for the convenience of the user
			cout << "Your number is - " << c << endl;
			break;
		case 2:
			c = a - b;
			system("cls"); //All what been in console clean for the convenience of the user
			cout << "Your number is - " << c << endl;
			break;
		case 3:
			c = a * b;
			system("cls"); //All what been in console clean for the convenience of the user
			cout << "Your number is - " << c << endl;
			break;
		case 4:
			c = a / b;
			system("cls"); //All what been in console clean for the convenience of the user
			cout << "Your number is - " << c << endl;
			break;
		default: //If user input wrong number this line of code tell him about it
			system("cls");
			cout << "You enter the wrong number" << endl;
			break;
		}
		//I ask the user if he wants to try again
		cout << "Do you want try again?" << endl << "y - yes / n - No" << endl;

		cin >> Result;

		//if variable Result == y cicle work again if Result == n i say goodbye to user
		if (Result == 'y')
		{
			system("cls");
		}
		else
		{
			system("cls");
			cout << "Goodbye" << endl;
			return 0;
		}
	}
}