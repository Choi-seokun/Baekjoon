#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, max = -1001, temp = 0;
    int num[100000];
    int sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        if (sum + num[i] < 0) {
            sum = 0;
            continue;
        }
        sum += num[i];
        if (max < sum) {
            max = sum;
        }
    }
    if (max == -1001) {
        max = *max_element(num, num + n);
    }
    
    cout << max;
}