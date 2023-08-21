//Hashing
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{
    long long L,H=0;
    string S;
    cin >> L;
    cin >> S;
    for(int i=0; i<S.size(); i++){
        int temp = S[i]-96;
        for(int r=0; r<i; r++){
            temp *= 31;
        }
        H += temp%1234567891;
    }
    cout << H;
}
