#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K, temp, count = 0;
    vector<int> v;

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    
    for (int i = N-1; i >= 0; i--) {
        if (v[i] <= K) {
            count += K / v[i];
            K = K - (K / v[i]) * v[i];
        }
    }

    cout << count;
}