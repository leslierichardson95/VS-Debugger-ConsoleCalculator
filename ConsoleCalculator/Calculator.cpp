#include "stdafx.h"
#include "Calculator.h"

double Calculator::Calculate(double number1, char operand, double number2)
{
	double answer = 0.0;
	switch (operand)
	{
	case '+':
		answer = number1 + number2;
		break;
	case '-':
		answer = number1 - number2;
		break;
	case '*':
		answer = number1 + number2;
		break;
	case '/':
		if (number2 == 0)
			throw "DivideByZeroException";
		answer = number1 / number2;
	default:
		answer = 0.0;
	}
	return answer;
}
