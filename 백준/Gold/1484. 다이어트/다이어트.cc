#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int G;
	float w1,w2;
	vector<int> v, result;

	cin >> G;
	for (int i = 1; i <= floor(sqrt(G)) + 1; i++) {
		if (G % i == 0) {
			v.push_back(i);
			v.push_back(G / i);
		}
	}

	for (int i = 0; i < v.size(); i += 2) {
		w1 = float(v[i] + v[i + 1]) / 2;
		w2 = v[i + 1] - w1;
		if (w1 == floor(w1) && w2 > 0) {
			result.push_back(w1);
		}
	}

	if (result.size() == 0) {
		cout << -1;
	}
	for (int i = result.size() - 1; i >=0; i--) {
		cout << result[i] << "\n";
	}
}