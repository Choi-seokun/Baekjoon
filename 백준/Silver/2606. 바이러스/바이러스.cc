//바이러스
#include <iostream>
#include <vector>
#include <algorithm> // sort사용
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, N, temp[2], count = 0;
    cin >> M;
    cin >> N;
    vector<pair<int, int>> p;
    vector<int> virus;

    for(int i=0; i<N; i++){
        cin >> temp[0] >> temp[1];
        p.push_back(make_pair(temp[0], temp[1]));
    }
    sort(p.begin(), p.end());

    int viruscomputer;
    virus.push_back(1);
    for(int i=0; i<virus.size(); i++){
        viruscomputer = virus[i];
        for(int x=0; x<N; x++){
            if(p[x].first == viruscomputer){
                for(int z=0; z < virus.size(); z++){
                    if(p[x].second==virus[z]){
                    count++; 
                    }
                }
                if(count==0){
                    virus.push_back(p[x].second);
                }
                count=0;
            }else if(p[x].second == viruscomputer){
                for(int z=0; z < virus.size(); z++){
                    if(p[x].first==virus[z]){
                        count++;
                    }
                }
                if(count==0){
                    virus.push_back(p[x].first);
                }
                count=0;
            }
        }
    }
    cout << virus.size()-1 <<"\n";
}