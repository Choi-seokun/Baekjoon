#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long K, N, temp, max=0, num = 0;
    long long mid, left, right;
    bool out = false;
    vector<long long> v;

    cin >> K >> N;

    for (int i = 0; i < K; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    left = 1;
    right = *max_element(v.begin(), v.end());
    mid = (left+right) / 2;

    while (true) {
        for (int i = 0; i < v.size(); i++) {
            num += v[i] / mid;
        }
        if (num < N) {
            right = mid;
            mid = (left + right) / 2;
        }
        if (num >= N) {
            if (max < mid) {
                max = mid;
            }
            if ((right - left) <= 1) {
                if (out == true) {
                    out = false;
                    num = 0;
                    break;
                }
                mid = right;
                out = true;
            }
            else {
                left = mid;
                mid = (left + right) / 2;
            }
        }
        num = 0;
    }

    cout << max;
}
