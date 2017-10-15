#include <iostream>

using namespace std;

int main() {
	int n;
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
	}

	return 0;
	// test
	// this is a change and another commit
}