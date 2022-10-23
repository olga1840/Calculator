#include<iostream>
using namespace std;
//#define Calculator 1
#define CALC_2

void main()
{
	setlocale(LC_ALL, "Russian");
	
#ifdef Calculator 1;
	double a, b;  // Числа, вводимые с клавиатуры
	char s;        //Sign - знак операции
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation!" << endl;
	}
#endif //Calculator 1

#ifdef CALC_2;
	double x, y, z; // Числа, вводимые с клавиатуры
	char n; // Знак операции
	cout << "Введите простое арифметическое выражение:  ";
	cin >> x >> n >> y >> z;
	
	switch (n)
	{
	case '+': 
		z = x + y;
		cout << x << "+" << y << " = " << z << endl;
		break;
	
	case '-':
		z = x - y;
		cout << x << "-" << y << " = " << z << endl;
		break;
	
	case '*': 
		z = x * y;
		cout << x << "*" << y << " = " << z << endl;
		break;
	
	case '/': 
		z = x / y;
		cout << x << "/" << y << " = " << z << endl;
		break;
	
	default:
	cout << "Операция не может быть выполнена.";
	}

#endif //CALC_2

	
}
	