#include <iostream>
#include <vector>
using namespace std;

pair<bool, bool> arr[50][50];
void my_search(int a, int b, int M, int N) {
    arr[a][b].second = true;
    if ((b + 1) < N) {
        if (arr[a][b + 1].first == true && arr[a][b + 1].second == false) {
            my_search(a, b + 1, M, N);
        }
    }
    if ((a + 1) < M){
        if (arr[a + 1][b].first == true && arr[a + 1][b].second == false) {
            my_search(a + 1, b, M, N);
        }
    }
    if ((b - 1) >= 0) {
        if (arr[a][b - 1].first == true && arr[a][b - 1].second == false) {
            my_search(a, b - 1, M, N);
        }
    }
    if ((a - 1) >= 0) {
        if (arr[a - 1][b].first == true && arr[a - 1][b].second == false) {
            my_search(a - 1, b, M, N);
        }
    }
}

int main()
{
    int T, M, N, K;
    int x, y, count = 0;
    vector<int> result;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> M >> N >> K;
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < N; k++) {
                arr[j][k].first = false;
                arr[j][k].second = false;
            }
        }
        for (int j = 0; j < K; j++) {
            cin >> x >> y;
            arr[x][y].first = true;
        }
        for (int a = 0; a < M; a++) {
            for (int b = 0; b < N; b++) {
                if (arr[a][b].first == true && arr[a][b].second == false) {
                    my_search(a, b, M, N);
                    count++;
                }
                else if (arr[a][b].first == false && arr[a][b].second == false) {
                    arr[a][b].second = true;
                }
            }
        }
        result.push_back(count);
        count = 0;
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}