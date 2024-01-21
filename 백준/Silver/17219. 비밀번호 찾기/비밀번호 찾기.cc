#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	int left, mid, right;
	string temp;
	vector<pair<string, string>> arr;
	vector<string> arr2;
	
	cin >> N >> M;
	getline(cin, temp);
	for (int i = 0; i < N; i++) {
		getline(cin, temp);
		arr.push_back(make_pair(temp.substr(0, temp.find(" ")), temp.substr(temp.find(" ") + 1, temp.length())));
	}

	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < M; i++) {
		getline(cin, temp);
		arr2.push_back(temp);
	}

	for (int i = 0; i < M; i++) {
		left = 0;
		right = N - 1;
		mid = (left + right) / 2;
		while (true) {
			if (arr[mid].first == arr2[i]) {
				cout << arr[mid].second << "\n";
				break;
			}
			if (arr[mid].first > arr2[i]) {
				right = mid-1;
				mid = (left + right) / 2;
			}
			if (arr[mid].first < arr2[i]) {
				left = mid + 1;
				mid = (left + right) / 2;
			}
		}
	}
}