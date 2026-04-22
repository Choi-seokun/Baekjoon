#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

int timeToInt(string timeStr) {
    return stoi(timeStr.substr(0, 2)) * 60 + stoi(timeStr.substr(3, 2));
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    
    unordered_map<string, int> in_time;
    map<string, int> total_time;
    
    for(string& record : records){
        stringstream ss(record);
        string time, car, type;
        ss >> time >> car >> type;
        
        if(type == "IN"){
            in_time[car] = timeToInt(time);
        }else{
            total_time[car] += (timeToInt(time) - in_time[car]);
            in_time.erase(car);
        }
    }
    
    for(auto& [car, time] : in_time){
        total_time[car] += (timeToInt("23:59") - time);
    }
    
    for(auto& [car, time] : total_time){
        if(time <= fees[0]){
            answer.push_back(fees[1]);
        }else{
            int fee = fees[1] + ceil((double)(time - fees[0]) / fees[2]) * fees[3];
            answer.push_back(fee);
        }
    }

    return answer;
}