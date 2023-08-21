//좌표 정렬하기
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    pair<int, int> point[100000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> point[i].first >> point[i].second;
    }
    
    sort(point, point+N);

    for(int i=0; i<N; i++){
        cout << point[i].first << " "<< point[i].second << "\n";
    }
}