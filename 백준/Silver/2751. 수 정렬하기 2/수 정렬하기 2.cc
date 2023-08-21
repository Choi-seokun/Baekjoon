//수 정렬하기2
#include <iostream>
#include <vector>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기
using namespace std;

int main()
{
    int N,temp;
    cin >> N;
    vector<int> arr;
    for(int i=0; i<N; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    
    for(int i=0; i<N; i++){
        cout << arr[i] << "\n";
    }
}