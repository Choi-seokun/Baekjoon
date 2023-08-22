//소수 구하기(에라토스테네스의 체)
#include <iostream>
#include <vector>

using namespace std;

int num[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int M, N, count=0;
    cin >> M >> N;

    for(int i=1; i<=N; i++){
        num[i]=i;
    }

    for(int i=1; i<=N; i++){
        if(num[i]==1){
            num[i]=0;
            continue;
        }
        if(num[i]==0){
            continue;
        }
        for(int y=2; y*num[i]<=N; y++){
            num[y*num[i]]=0;
        }
        count = 0;
    }

    for(int i=M; i<=N; i++){
        if(num[i]!=0){
            cout << num[i] << "\n";
        }
    }
}