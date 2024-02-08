#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool check = true;
vector<int> arr;
int result[8];
int N, M;

void my_dfs(int start, int count) {
    for (int i = start; i < arr.size(); i++) {
        if (count < M) {
            result[count] = arr[i];
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
    int temp;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    my_dfs(0, 0);
}