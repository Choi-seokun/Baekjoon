#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    
    int dx[] = {0, 0, -1, 1};
    int dy[] = {1, -1, 0, 0};
    
    queue<pair<int,int>> q;
    q.push({0,0});
    
    while(!q.empty()){
        pair<int, int> current = q.front();
        q.pop();
        
        int cx = current.first;
        int cy = current.second;
        
        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && maps[nx][ny] == 1){
                q.push({nx, ny});
                maps[nx][ny] = maps[cx][cy] + 1;
            } 
        }
    }
    
    return maps[n-1][m-1] == 1 ? -1 : maps[n-1][m-1];
}