#include <iostream>
using namespace std;

bool arr[1001][1001] = { false };
bool check[1001][1001] = { false };

bool my_search(int i, int N) {
    bool result = false;
    int count = 0;
    for (int j = 1; j <= N; j++) {
        if (arr[i][j] == true && check[i][j] == false) {
            result = true;
            check[i][j] = true;
            my_search(j, N);
        }
        if (arr[j][i] == true && check[j][i] == false) {
            result = true;
            check[j][i] = true;
            my_search(j, N);
        }
        if (arr[j][i] == false && arr[i][j] == false) {
            count++;
        }
    }
    if (count == N) {
        result = true;
    }
    return result;
}

int main()
{
    int N, M;
    int temp1, temp2;
    bool result = false;
    int count = 0;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> temp1 >> temp2;
        arr[temp1][temp2] = true;
    }

    for (int i = 1; i <= N; i++) {
        result = my_search(i, N);
        if (result == true) {
            count++;
        }
    }

    cout << count;
}