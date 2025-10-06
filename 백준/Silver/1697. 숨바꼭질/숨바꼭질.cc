#include <iostream>
#include <queue>

using namespace std;

bool visited[100001] = {false};
int main(){
    queue<pair<int, int>> q;

    int N, K, temp;
    cin >> N >> K;

    if(N == K){
        cout << 0;
        return 0;
    }
    q.push(make_pair(N+1, 1));
    q.push(make_pair(N-1, 1));
    q.push(make_pair(N*2, 1));
    pair<int,int> now;
    while(true){
        now = q.front();
        if(now.first==K){
            cout << now.second;
            break;    
        }
        
        q.pop();
        int next[3] = {now.first+1, now.first-1, now.first*2};
        for(int i=0; i<3; i++){
            if(next[i] < 0 || next[i] > 100000){
                continue;
            }else if(visited[next[i]]!=true){
                q.push(make_pair(next[i], now.second+1));
                visited[next[i]]=true;
            }
        }
    }

    return 0;
}
