//수 찾기
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;

bool BinarySearch(vector<int> &num, int i){
    int first=0, end, mid;
    mid = (num.size()-1)/2;
    end = num.size()-1;
    while(true){
        if(num[mid] == i){
            return true;
        }else if(num[mid] > i){
            end = mid-1;
            mid = (end+first)/2;
        }else{
            first = mid+1;
            mid = (end+first)/2;
        }
        if(first >= end){
            if(num[first]==i){
                return true;
            }
            break;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> num1;
    vector<int> num2;

    int N,temp;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp;
        num1.push_back(temp);
    }

    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> temp;
        num2.push_back(temp);
    }
    sort(num1.begin(), num1.end());

    for(int i=0; i<M; i++){
        if(BinarySearch(num1, num2[i])){
            cout << "1" << "\n";
        }else{
            cout << "0" << "\n";
        }
    }
}