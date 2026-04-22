#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> results) {
    vector<vector<bool>> graph(n+1, vector<bool>(n+1, false));
    
    for(auto& result : results){
        graph[result[0]][result[1]] = true;
    }
    
    for(int k=1; k<n+1; k++){
        for(int i=1; i<n+1; i++){
            for(int j=1; j<n+1; j++){
                if(graph[i][k] == true && graph[k][j] == true){
                    graph[i][j] = true;
                }
            }
        }
    }
    
    
    int answer = n;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            if(i==j) continue;
            if(graph[i][j] == graph[j][i]){
                answer--;
                break;
            }
        }
    }
    
    return answer;
}