#include <iostream>
using namespace std;

int main()
{
	int n;
	int result[1001];

	cin >> n;
	
	result[1] = 1;
	result[2] = 3;
	for (int i = 3; i <= n; i++) {
		result[i] = (result[i - 1] + result[i - 2] * 2) % 10007;
	}

	cout << result[n];
}