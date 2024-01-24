#include <iostream>
using namespace std;

int main()
{
	int n;
	int score[301];
	int dp[301];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> score[i];
	}

	dp[0] = 0;
	dp[1] = score[1];
	dp[2] = score[1] + score[2];
	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 3] + score[i - 1] + score[i], dp[i - 2] + score[i]);
	}

	cout << dp[n];
}