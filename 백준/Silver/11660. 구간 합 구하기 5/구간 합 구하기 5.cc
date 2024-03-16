#include <iostream>
#include <vector>
using namespace std;

int arr[1025][1025];
int rowdp[1025][1025];//특정 행dp
int columndp[1025][1025];//특정 열dp 
int sumdp[1025][1025];//그냥 연속해서 더한 dp
int main()
{
    int N, M, temp, sum = 0;
    int x1, y1, x2, y2;
    vector<int> result;

    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
            if (j - 1 > 0) {
                sumdp[i][j] = sumdp[i][j - 1] + arr[i][j];
            }
            else {
                sumdp[i][j] = sumdp[i-1][N] + arr[i][j];
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            columndp[i][j] = columndp[i][j - 1] + arr[j][i];
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (y1 - 1 > 0) {
            sum = sumdp[x2][y2] - sumdp[x1][y1 - 1];
        }
        else {
            sum = sumdp[x2][y2] - sumdp[x1-1][N];
        }
        if (x1 != x2) {
            for (int j = 1; j < y1; j++) {
                sum -= (columndp[j][x2] - columndp[j][x1]);
            }
            for (int k = y2 + 1; k <= N; k++) {
                sum -= (columndp[k][x2 - 1] - columndp[k][x1 - 1]);
            }
        }
        /*
        for (int j = 1; j <= x2; j++) {
            sum += rowdp[j][y2];
        }
        for (int k = 1; k < x1; k++) {
            sum -= rowdp[k][y2];
        }
        for (int h = 1; h < y1; h++) {
            sum -= columndp[h][x2];
        }
        for (int g = 1; g < x1; g++) {
            sum += rowdp[g][y1 - 1];
        }
        */
        result.push_back(sum);
        sum = 0;
    }

    for (int i = 0; i < M; i++) {
        cout << result[i] << "\n";
    }
}