//1로 만들기
#include <iostream>
#include <vector>
#include <algorithm> // sort사용
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(1);
    for(int i=4; i<1000001; i++){
        if(i%3==0 && i%2==0){
            int arr[3];
            arr[0]=dp[i/3]+1;
            arr[1]=dp[i/2]+1;
            arr[2]=dp[i-1]+1;
            sort(arr,arr+3);
            dp.push_back(arr[0]);
        }else if(i%3==0){
            if(dp[i/3]+1 <= dp[i-1]+1){
                dp.push_back(dp[i/3]+1);
            }else{
                dp.push_back(dp[i-1]+1);
            }
        }else if(i%2==0){
            if(dp[i/2]+1 <= dp[i-1]+1){
                dp.push_back(dp[i/2]+1);
            }else{
                dp.push_back(dp[i-1]+1);
            }
        }else{
            if(dp[i-1]+1 <= dp[i-2]+2){
                dp.push_back(dp[i-1]+1);
            }
            else{
                dp.push_back(dp[i-2]+2);
            }
        }
    }
    cout << dp[N];
}