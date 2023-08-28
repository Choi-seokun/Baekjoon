//나는야 포켓몬 마스터 이다솜
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

    int N, M;
    map<string, int> number;
    string temp;
    vector<string> poketmon;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> temp;
        poketmon.push_back(temp);
        number.insert({temp, i+1});
    }
    for(int i=0; i<M; i++){
        cin >> temp;
        if(temp[0]>=65 && temp[0]<=90){
            cout << number[temp] << "\n";
        }else{
            cout << poketmon[stoi(temp)-1] << "\n";
        }
    }
}