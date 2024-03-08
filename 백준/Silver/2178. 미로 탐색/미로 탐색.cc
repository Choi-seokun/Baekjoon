#include <iostream>
#include <queue> 
#include <string>
using namespace std;

int main()
{
	queue<pair<int, int>> bfs;
	bool arr[101][101];
	int depth[101][101];
	string temp;
	int N, M;
	int x, y;

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		for (int j = 0; j < M; j++) {
			if (temp[j] == '1') {
				arr[i][j+1] = true;
			}
			else {
				arr[i][j+1] = false;
			}
		}
	}
	
	bfs.push(make_pair(1, 1));
	depth[1][1] = 1;
	arr[1][1] = false;
	while (true)
	{
		x = bfs.front().first;
		y = bfs.front().second;
		if (x == N && y == M) {
			break;
		}
		bfs.pop();
		if (arr[x + 1][y] == true && x + 1 <= N) {
			bfs.push(make_pair(x + 1, y));
			depth[x + 1][y] = depth[x][y] + 1;
			arr[x + 1][y] = false;
		}
		if (arr[x - 1][y] == true && x - 1 >= 1) {
			bfs.push(make_pair(x - 1, y));
			depth[x - 1][y] = depth[x][y] + 1;
			arr[x - 1][y] = false;
		}
		if (arr[x][y + 1] == true && y + 1 <= M) {
			bfs.push(make_pair(x, y + 1));
			depth[x][y + 1] = depth[x][y] + 1;
			arr[x][y + 1] = false;
		}
		if (arr[x][y - 1] == true && y - 1 >= 1) {
			bfs.push(make_pair(x, y - 1));
			depth[x][y - 1] = depth[x][y] + 1;
			arr[x][y - 1] = false;
		}
	}
	cout << depth[N][M];
}