//수 정렬하기3
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기
using namespace std;

int main()
{
    int N,K, result=1;
    cin >> N >> K;
    for(int i=0; i<K; i++){
        result *= N-i;
    }
    for(int i=0; i<K; i++){
        result /= i+1;
    }
    cout << result;
}