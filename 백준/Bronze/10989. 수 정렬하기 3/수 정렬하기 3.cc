//수 정렬하기3
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기
using namespace std;

int main()
{
    //기본으로 연동되어있던 iostream과 stdio.h의 연동을 끊어 cin과 cout의 실행속도를 올리는 코드
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, arr[10001]={};
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> temp;
        arr[temp]++;
    }
    
    for(int i=1; i<=10000; i++){
        for(int x=0; x < arr[i]; x++){
            cout << i << "\n";
        }
    }
    return 0;
}