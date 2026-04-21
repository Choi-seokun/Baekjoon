#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> isVisited(n, false);
    queue<int> q;
    
    for(int i=0; i<n; i++){
        if(isVisited[i]){
            continue;
        }
        q.push(i);
        while(!q.empty()){
            int current = q.front();
            q.pop();
            isVisited[current] = true;
            
            for(int j=0; j<n; j++){
                if(computers[current][j] == 1 && isVisited[j] == false){
                    q.push(j);
                }
            }
        }
        answer++;
    }
    
    return answer;
}