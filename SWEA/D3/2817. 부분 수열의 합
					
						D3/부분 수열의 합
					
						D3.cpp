#include<iostream>
#include <vector>

using namespace std;

int T, N, K, result;
vector<int> arr;

void dfs(int idx, int sum) {
	if (sum == K) {
		result++;
		return;
	}
	
	if (sum > K || idx == N) {
		return;
	}

	dfs(idx + 1, sum + arr[idx]);
	dfs(idx + 1, sum);
}

int main(int argc, char** argv)
{	
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		cin >> N >> K;
		arr.assign(N, 0);

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		dfs(0, 0);
		cout << "#" << t + 1 << " " << result << "\n";
		result = 0;
	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}