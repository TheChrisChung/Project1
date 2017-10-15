#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	// Calculator
	char input;
	int a, b;
	cout << "Enter '+' or '-' or '*' or '/'\n";
	cout << "I want to use: ";
	cin >> input;

	cout << "\nEnter your first number: ";
	cin >> a;
	cout << "Enter your second number: ";
	cin >> b;

	if (input == '+') {
		cout << a << " + " << b << " = " << a + b;
	}
	else if (input == '-') {
		cout << a << " - " << b << " = " << a - b;
	}
	else if (input == '*') {
		cout << a << " * " << b << " = " << a * b;
	}
	else if (input == '/') {
		cout << a << " / " << b << " = " << a / b;
	}
	else {
		cout << "I don't know what to do...";
	}

	// For loops
	/*int n;
	cout << "Enter a number: ";
	cin >> n;
	int maxN = n;

	for (; n > 0; --n) {
		cout << n << " ";
	}
	for (; n <= maxN; ++n) {
		cout << n << " ";
	}

	cout << endl;
	int m;
	cout << "Enter a number: ";
	cin >> m;
	int maxM = m;

	for (; m > 0; --m) {
		cout << m << " ";
	}
	for (; m <= maxM; ++m) {
		cout << m << " ";
	}*/

	return 0;
}