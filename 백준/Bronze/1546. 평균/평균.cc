//팰린드롬수
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{   
    int N;
    double sum;
    int score[1000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> score[i];
    }
    sort(score,score+N);
    for(int i=0; i<N; i++){
        sum += (score[i]/double(score[N-1])*100);
    }
    cout << sum/N;   
}