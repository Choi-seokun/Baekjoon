#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	string temp;
	bool arr[25][25];
	queue<pair<int, int>> bfs;
	int x, y;
	int xx[4] = { 0, 1, 0, -1 };
	int yy[4] = { 1, 0, -1, 0 };
	int count = 0;
	vector<int> result;
	
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int j = 0; j < N; j++) {
			if(temp[j] == '1'){
				arr[i][j] = true;
			}
			else {
				arr[i][j] = false;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == true) {
				bfs.push(make_pair(i, j));
				arr[i][j] = false;
				while (!bfs.empty()) {
					x = bfs.front().first;
					y = bfs.front().second;
					bfs.pop();
					count++;
					for (int k = 0; k < 4; k++) {
						if (x + xx[k] >= 0 && x + xx[k] < N && y + yy[k] >= 0 && y + yy[k] < N && arr[x + xx[k]][y + yy[k]] == true) {
							bfs.push(make_pair(x + xx[k], y + yy[k]));
							arr[x + xx[k]][y + yy[k]] = false;
						}
					}
				}
				result.push_back(count);
				count = 0;
			}
		}
	}
	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
}