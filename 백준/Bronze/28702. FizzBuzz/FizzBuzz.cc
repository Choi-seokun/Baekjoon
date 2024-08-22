#include <iostream>
#include <string>
using namespace std;

int main()
{
	string temp;
	int result;

	for (int i = 0; i < 3; i++) {
		cin >> temp;
		if (temp != "FizzBuzz" && temp != "Fizz" && temp != "Buzz") {
			result = stoi(temp) + (3 - i);
		}
	}

	if (result % 15 == 0) {
		cout << "FizzBuzz";
	}
	else if (result % 5 == 0) {
		cout << "Buzz";
	}
	else if (result % 3 == 0) {
		cout << "Fizz";
	}
	else {
		cout << result;
	}
}
