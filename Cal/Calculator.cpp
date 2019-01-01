#include "Calculator.h"



double Calculator::Calculate(float x, char op, float y)
{
	switch (op) {

	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		return 0;
		break;
	}
}
