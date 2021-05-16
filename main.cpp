#include <iostream>

using std::cout;
using std::endl;
using std::cin;

// Написать функцию проверки, является ли число простым

bool is_simple(uint16_t number) {
	if (number == 1) return false;
	for (int d = 2; d * d <= number; d++) {
		if (number % d == 0) 
			return false;
	}
	return true;
}

int main() {

	uint16_t number;
	do {
		cout << "\nInput 0 for exit.\nInput number :  ";
		cin >> number;
		if (number == 0) break;
		if(is_simple(number))
			cout << "Number   " << number << "  prostoe!\n";
		else
			cout << "Number   " << number << "  ne prostoe!\n";
	} while (number != 0);
	

	system("pause");
	return 0;
}