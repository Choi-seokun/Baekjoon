#include <iostream>
using namespace std;

int tree[1000000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int Max = 0;
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
        if (Max < tree[i]) Max = tree[i];
    }

    int start = 0, end = Max;
    int result = 0;

    while (start <= end) {
        long long sum = 0;          // ✅ long long
        int mid = (start + end) / 2; // ✅ while 내부에서 mid 계산

        for (int i = 0; i < N; i++) {
            if (tree[i] > mid)
                sum += (tree[i] - mid);
        }

        if (sum >= M) {
            result = mid;
            start = mid + 1;  // ✅ 높이 더 높여보기
        } else {
            end = mid - 1;    // ✅ 낮춰서 다시 탐색
        }
    }

    cout << result;
    return 0;
}