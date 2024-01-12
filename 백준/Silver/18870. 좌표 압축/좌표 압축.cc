#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, temp;
	int left, mid, right;
	vector<int> v1;
	vector<int> v2;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		v1.push_back(temp);
		v2.push_back(temp);
	}

	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());

	for (int i = 0; i < N; i++) {
		left = 0;
		right = v2.size() - 1;
		mid = (left + right) / 2;
		while (true) {
			if (v2[mid] == v1[i]) {
				cout << mid << " ";
				break;
			}
			if (v2[mid] > v1[i]) {
				right = mid-1;
				mid = (left + right) / 2;
			}
			if (v2[mid] < v1[i]) {
				left = mid+1;
				mid = (left + right) / 2;
			}
		}
	}
}