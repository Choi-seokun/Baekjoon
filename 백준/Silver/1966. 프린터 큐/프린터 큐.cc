#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int T, N, M, temp;
	vector<pair<int,bool>> array;
	vector<int> result;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> temp;
			if (i == M) {
				array.push_back(make_pair(temp, true));
			}
			else {
				array.push_back(make_pair(temp, false));
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = i+1; j < N; j++) {
				if (array[i].first < array[j].first) {
					array.push_back(array[i]);
					array.erase(array.begin() + i);
					i--;
					break;
				}
			}
		}

		for (int i = 0; i < N; i++) {
			if (array[i].second == true) {
				result.push_back(i + 1);
			}
		}
		array.clear();
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
}