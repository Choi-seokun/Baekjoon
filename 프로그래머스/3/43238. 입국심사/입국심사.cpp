#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    long maxTime = 0;
    for(auto& time : times){
        if(maxTime<time){
            maxTime = time;
        }        
    }
    
    long long low = 1;
    long long high = maxTime*n;
    while(low <= high){
        long long mid = (low+high)/2;
        long long count = 0;
        for(auto& time : times){
            count += mid / time;
        }
        
        if(count >= n){
            answer = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    
    return answer;
}