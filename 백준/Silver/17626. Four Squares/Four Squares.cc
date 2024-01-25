#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, temp, min = 2100000000;
	int dp[50001];

	cin >> n;

	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = floor(sqrt(i)); j > 0; j--) {
			temp = 1 + dp[i - int(pow(j, 2))];
			if (min > temp) {
				min = temp;
			}
		}
		dp[i] = min;
		min = 2100000000;
	}

	cout << dp[n];
}