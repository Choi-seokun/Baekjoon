#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    int map_[1000][1000];
    int result[1000][1000];
    queue<pair<int,int>> bfs;
    int shift_y[4] = {1, -1, 0, 0};
    int shift_x[4] = {0, 0, -1, 1};

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map_[i][j];
            if (map_[i][j] == 2) {
                bfs.push({i, j});
                result[i][j] = 0;
            } 
            else if (map_[i][j] == 0) {
                result[i][j] = 0;
            } 
            else {
                result[i][j] = -1; // 아직 방문 안 한 1
            }
        }
    }

    while (!bfs.empty()) {
        auto now = bfs.front(); // ✅ front() 사용
        bfs.pop();

        for (int i = 0; i < 4; i++) {
            int next_y = now.first + shift_y[i];
            int next_x = now.second + shift_x[i];

            if (next_x < 0 || next_x >= m || next_y < 0 || next_y >= n) continue;
            if (map_[next_y][next_x] == 0) continue;        // ✅ 벽은 이동 불가
            if (result[next_y][next_x] != -1) continue;     // ✅ 이미 방문한 곳은 건너뛰기

            result[next_y][next_x] = result[now.first][now.second] + 1; // ✅ 거리 계산
            bfs.push({next_y, next_x});
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}