//부녀회장이 될테야
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{
     int T,k,n;
     cin >> T;
     for(int i=0; i<T; i++){
        int apt[15][15] = {};
        cin >> k;
        cin >> n;
        for(int x=0; x<=k; x++){
            for(int j=1; j<=n; j++){
                if(x==0){
                    apt[x][j] = j;
                }else{
                    for(int z=1; z<=j; z++){
                        apt[x][j] += apt[x-1][z];
                    }
                }
            }
        }
        cout << apt[k][n]<<endl;
     }
}