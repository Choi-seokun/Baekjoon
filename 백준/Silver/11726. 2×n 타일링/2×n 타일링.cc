//2*n 타일링
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(2);
    for(int i=3; i<=1000; i++){
        dp.push_back((dp[i-1]+dp[i-2])%10007);
    }

    cout << dp[n];
}