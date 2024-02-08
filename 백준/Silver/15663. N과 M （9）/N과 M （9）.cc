#include <iostream>
#include <algorithm>
using namespace std;

int arr[9];
int excludeindex[9];
int result[9];
int N, M;
bool skip = false;

void my_dfs(int count) {
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            result[count] = 0;
        }
        for (int j = 0; j < count && count < M; j++) {
            if (i == excludeindex[j]) {
                skip = true;
                break;
            }
        }
        if (result[count] == arr[i] || skip == true) {
            skip = false;
            continue;
        }
        if (count < M) {
            result[count] = arr[i];
            excludeindex[count] = i;
            my_dfs(count + 1);
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
    my_dfs(0);
}