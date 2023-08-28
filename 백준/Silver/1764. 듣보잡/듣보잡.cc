//듣보잡
#include <iostream>
#include <vector>
#include <algorithm> // sort사용
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    string temp;
    map<string, int> NN;
    vector<string> result;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> temp;
        NN.insert({temp, i+1});
    }

    for(int i=0; i<M; i++){
        cin >> temp;
        if(NN[temp]!=0){
            result.push_back(temp);
        }
    }
    
    sort(result.begin(), result.end());
    cout << result.size() << "\n";
    for(int i=0; i< result.size(); i++){
        cout << result[i] << "\n";
    }
}