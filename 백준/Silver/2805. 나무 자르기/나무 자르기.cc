#include <iostream>

using namespace std;

int tree[1000000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, Max=0;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> tree[i];
        if(Max < tree[i]){
            Max = tree[i];
        }
    }

    int mid = Max/2;
    int start = 0;
    int end = Max;
    long sum=0;
    int MaxH=0;
    bool check = true;
    while(start <= end){
        mid = (start + end)/2;
        if(start == end){
            check = false;
        }
        for(int j=0; j<N; j++){
            if(tree[j]-mid>0){
                sum+=tree[j]-mid;
            }
        }
        if(sum>=M){
            MaxH = mid;
            start = mid+1;
        }else if(sum<M){
            end = mid-1;
        }
        sum = 0;
    }
    cout << MaxH;
    
    return 0;
}
