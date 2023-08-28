//ATM
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

    int N, temp, sum = 0;
    vector<int> time;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> temp;
        time.push_back(temp);
    }
    sort(time.begin(), time.end());

    for(int i=0; i<N; i++){
        for(int x=0; x<i+1; x++){
            sum += time[x];
        }
    }
    cout << sum;
}