#include <iostream>
using namespace std;

int result[8];
int N, M;

void my_dfs(int start, int count) {
    for (int i = start; i <= N - (M - count - 1); i++) {
        result[count] = i;
        if (count < M) {
            my_dfs(i + 1, count + 1);
        }
        else {
            for (int j = 0; j < M; j++) {
                cout << result[j] << " ";
            }
            cout << "\n";
            return;
        }
    }
}

int main()
{
    cin >> N >> M;
    my_dfs(1, 0);
}