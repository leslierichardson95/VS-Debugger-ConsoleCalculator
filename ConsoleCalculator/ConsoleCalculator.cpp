#include "stdafx.h"
#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double number1 = 0.0;
	double number2 = 0.0;
	double answer = 0.0;
	char operand = '+';

	cout << "Calculator Application" << endl << endl;
	cout << "Please enter the operation to perform." << endl;

	Calculator c;
	while (true)
	{
		cin >> number1 >> operand >> number2;
		answer = c.Calculate(number1, operand, number2);
		cout << number1 << " " << operand << " " << number2 << " = " << answer << endl;
	}

	return 0;
}