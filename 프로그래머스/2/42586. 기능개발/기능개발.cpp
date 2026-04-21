#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> days;
    
    for(int i=0; i < progresses.size(); i++){
        int day = (int)ceil(double(100 - progresses[i]) / speeds[i]);
        days.push(day);
    }
    
    int count = 1;
    while(!days.empty()){
        int max = days.front();
        days.pop();
        while(!days.empty() && max >= days.front()){
            days.pop();
            count++;
        }
        answer.push_back(count);
        count = 1;
    }
    
    return answer;
}