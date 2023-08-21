//분해합
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용

using namespace std;

int main()
{
    int N;
    string M;
    int sum =0;
    int count=0;
    cin >> N;
    int min = N;
    for(int i=1; i<N; i++){
        M = to_string(i);
        for(int j=0; j < M.size(); j++){
            if(j==0){
              sum += i;  
            }
            sum += M[j]-48;
        }
        if(N==sum){
            count++;
            if(min > i){
                min = i;
            }
        }
        sum = 0;
    }
    if(count==0){
        cout << '0';
    }else{
        cout << min;
    }
}