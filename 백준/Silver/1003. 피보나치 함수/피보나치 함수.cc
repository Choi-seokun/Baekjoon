//피보나치 함수
#include <iostream>
#include <vector>
#include <algorithm> // sort사용
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, temp;
    pair<int, int> result[41];
    cin >> T;
    for(int i=0; i<=40; i++){
        if(i==0){
            result[i].first = 1;
            result[i].second = 0;
        }else if(i==1){
            result[i].first = 0;
            result[i].second = 1;
        }else{
            result[i].first = result[i-1].first + result[i-2].first;
            result[i].second = result[i-1].second + result[i-2].second;
        }
    }
    for(int i=0; i<T; i++){
        cin >> temp;
        cout << result[temp].first << " " << result[temp].second << "\n";
    }
}