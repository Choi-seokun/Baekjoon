//피보나치 함수
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

    int N;
    int count = 0;
    int temp = 0;
    cin >> N;
    for(int i=1; i<=N; i++){
        if(i%5==0){
            temp = i;
            while(true){
                count++;
                temp = temp/5;
                if(temp%5 != 0){
                    break;
                }
            }
        }
    }
    cout << count;
}