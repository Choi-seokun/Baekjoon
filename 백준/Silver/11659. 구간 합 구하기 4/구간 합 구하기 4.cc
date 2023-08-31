//구간 합 구하기4
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M, i, j, temp;
    vector<int> num;
    vector<int> sum;
    cin >> N >> M;
    num.push_back(0);
    sum.push_back(0);

    for(int i=0; i<N; i++){
        cin >> temp;
        num.push_back(temp);
    }

    temp = 0;
    for(int i=1; i<=N; i++){
        temp += num[i];
        sum.push_back(temp);
    }

    for(int x=0; x<M; x++){
        cin >> i >> j;
        cout << sum[j]-sum[i-1] << "\n";
    }

}