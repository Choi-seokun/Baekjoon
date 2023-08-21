//나이순 정렬
#include <iostream>
#include <vector>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<pair<int, string>> member;
    int N, age;
    string temp;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> age >> temp;
        member.push_back(make_pair(age*100000+i, temp)); 
    }
    sort(member.begin(), member.end());

    for(int i=0; i<N; i++){
        temp = to_string(member[i].first);
        for(int x=0; x < temp.length()-5; x++){
            cout << temp[x];
        }
        cout << " " << member[i].second << "\n";
    }
}