//영화감독 숌
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count=0;
    cin >> N;
    vector<int> nums;
    
    for(int i=1; true; i++){
        if(to_string(i).find("666") != string::npos){
            nums.push_back(i);
            count++;
        }
        if(count == 10000){
            break;
        }
    }
    cout << nums[N-1];
}