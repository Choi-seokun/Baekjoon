#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string str;
	bool check = false;
	vector<char> v;
	while (true) {
		getline(cin, str);
		if (str.length() == 1 && str[0] == '.') {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				v.push_back(str[i]);
			}
			else if (str[i] == ')' || str[i] == ']') {
				if (v.empty() == true) {
					cout << "no\n";
					check = true;
					break;
				}
				if (v.back() == '[' && str[i] == ')') {
					cout << "no\n";
					check = true;
					break;
				}
				if (v.back() == '(' && str[i] == ']') {
					cout << "no\n";
					check = true;
					break;
				}
				v.pop_back();
			}
			if (i == str.length() - 1 && v.empty() == false) {
				cout << "no\n";
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "yes\n";
		}
		v.clear();
		check = false;
	}
}