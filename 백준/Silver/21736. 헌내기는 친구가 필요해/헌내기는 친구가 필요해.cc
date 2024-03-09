#include <iostream>
#include <queue>
using namespace std;

bool check[600][600];

int main()
{
	int N, M;
	char arr[600][600];
	int count = 0;
	int x, y;
	int xx[4] = { 1,0,-1,0 };
	int yy[4] = { 0,1,0,-1 };
	queue<pair<int, int>> bfs;

	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'I') {
				bfs.push(make_pair(i, j));
				check[i][j] = true;
			}
		}
	}

	while (!bfs.empty()) {
		x = bfs.front().first;
		y = bfs.front().second;
		bfs.pop();
		for (int i = 0; i < 4; i++) {
			if (x + xx[i] >= 0 && x + xx[i] < N && y + yy[i] >= 0 && y + yy[i] < M && check[x + xx[i]][y + yy[i]] == false && (arr[x + xx[i]][y + yy[i]] == 'O' || arr[x + xx[i]][y + yy[i]] == 'P')) {
				bfs.push(make_pair(x + xx[i], y + yy[i]));
				check[x + xx[i]][y + yy[i]] = true;
				if (arr[x + xx[i]][y + yy[i]] == 'P') {
					count++;
				}
			}
		}
	}

	if (count == 0) {
		cout << "TT";
	}
	else {
		cout << count;
	}
}