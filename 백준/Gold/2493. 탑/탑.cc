#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<pair<int, int>> top;
	vector<int> result;
	int N, temp;
	bool check = false;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		while (!top.empty())
		{
			if (top.back().first < temp) {
				top.pop_back();
			}
			else {
				check = true;
				result.push_back(top.back().second);
				break;
			}
		}
		if (check == false) {
			result.push_back(0);
		}
		else {
			check = false;
		}
		top.push_back(make_pair(temp, i + 1));
	}
	


	for (int i = 0; i < N; i++) {
		cout << result[i] << " ";
	}
}