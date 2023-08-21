//덩치
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
    int rank[50];
    pair<int, int> xy[50];
    int count = 0;
    
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> xy[i].first >> xy[i].second;
        rank[i] = 1;

        for(int x=0; x<i; x++){
            if(xy[i].first > xy[x].first && xy[i].second > xy[x].second){
                rank[i] = rank[x];
                rank[x]++;
            }else if(xy[i].first < xy[x].first && xy[i].second < xy[x].second){
                count++;
            }else{
                rank[i] = rank[x];
            }
        }
        if(rank[i]!=count+1){
            rank[i] = count+1;
        }

        count = 0;
    }
    
    for(int i=0; i<N; i++){
        cout << rank[i] << " ";
    }
    
}