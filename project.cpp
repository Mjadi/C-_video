#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int half(int a, int b) {
	return a / b;
}

int main(int argc, char const *argv[])
{
	cout << "******Calculator App*******" << endl;

	int num1;
	int num2;

	string oper;

	cout << "enter the first number: ";
	cin >> num1;

	cout << "enter the second number: ";
	cin >> num2;

	cout << "enter the operation: ";
	cin >> oper;

	if (oper == "+")
	{
		cout << add(num1, num2);
	}

	else if (oper == "-") {
		cout << sub(num1, num2);
	}

	else if (oper == "*") {
		cout << mul(num1, num2);
	}

	else if (oper == "/") {
		cout << half(num1, num2);
	}

	return 0;
}