#include <iostream>
#include <algorithm>
using namespace std;

int arr[8];
int result[8];
int N, M;

void my_dfs(int start, int count) {
    for (int i = start; i < N; i++) {
        result[count] = arr[i];
        if (count < M) {
            my_dfs(i, count + 1);
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
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    my_dfs(0, 0);
}
