#include <iostream>
using namespace std;

int main()
{
    int N;
    int arr[1000][3];
    int dp[1000][3];
    int min = 1000001;
    int index;

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (min > dp[i - 1][k] && k != j) {
                    min = dp[i - 1][k];
                }
            }
            dp[i][j] = arr[i][j] + min;
            min = 1000001;
        }
    }

    min = dp[N - 1][0];
    for (int i = 1; i < 3; i++) {
        if (min > dp[N - 1][i]) {
            min = dp[N - 1][i];
        }
    }
    cout << min;
}