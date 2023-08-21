//단어 정렬
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
    pair<int, string> words[20000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> words[i].second;
        words[i].first = words[i].second.length();
    }
    sort(words, words+N);

    for(int i=0; i<N; i++){
        if(words[i].second != words[i+1].second){
            cout << words[i].second << "\n";
        }
    }

}