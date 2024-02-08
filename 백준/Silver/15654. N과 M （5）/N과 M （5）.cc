#include <iostream>
#include <algorithm>
using namespace std;

bool check = true;
int arr[8];
int result[8];
int N, M;

void my_dfs(int count) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < count && count < M; j++) {
            if (arr[i] == result[j]) {
                check = false;
                break;
            }
        }
        if (check == true && count < M) {
            result[count] = arr[i];
        }
        else if(count < M){
            check = true;
            continue;
        }
        if (count < M) {
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