#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
    vector<pair<int, int>> adj[51];
    
    for(auto r : road){
        adj[r[0]].push_back({r[1], r[2]});
        adj[r[1]].push_back({r[0], r[2]});
    }
    
    vector<int> dist(N+1, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[1] = 0;
    pq.push({0, 1});
    
    while(!pq.empty()){
        int d = pq.top().first;
        int curr = pq.top().second;
        pq.pop();
        
        if(d > dist[curr]){
            continue;
        }
        
        for(auto edge : adj[curr]){
            int next = edge.first;
            int cost = edge.second;
            if(dist[next] > d + cost){
                dist[next] = d + cost;
                pq.push({dist[next], next});
            }
        }
    }
    
    int answer = 0;
    for(int i = 1; i < N+1; i++){
        if(dist[i] <= K){
            answer++;
        }
    }
    
    return answer;
}