//요세푸스 문제0
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

    int N,K;
    int count = 0, count2 = 0;
    int num[1001] = {};
    cin >> N >> K;
    
    for(int i=0; i<N; i++){
        num[i+1] = i+1;
    }

    cout << "<";
    for(int x=1; true; x++){
        if(N<x){
            x=1;
        }
        if(num[x] != 0){
            count++;
        }
        if(count==K){
            count2++;
            if(count2 == N){
                cout << num[x];
            }else{
                cout << num[x] << ", ";
            }
            num[x] = 0;
            count = 0;
        }
        if(count2 == N){
            break;
        }
    }
    cout << ">";

}