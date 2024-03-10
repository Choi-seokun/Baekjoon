#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int A, B;
	queue<pair<long long, long long>> bfs;
	bool check = false;

	cin >> A >> B;
	bfs.push(make_pair(1, A));
	while (!bfs.empty()) {
		if (bfs.front().second == B) {
			check = true;
			break;
		}
		if (bfs.front().second * 2 <= B) {
			bfs.push(make_pair(bfs.front().first + 1, bfs.front().second * 2));
		}
		if (bfs.front().second * 10 + 1 <= B) {
			bfs.push(make_pair(bfs.front().first + 1, bfs.front().second * 10 + 1));
		}
		bfs.pop();
	}

	if (check == true) {
		cout << bfs.front().first;
	}
	else {
		cout << "-1";
	}
}